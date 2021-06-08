cmake_minimum_required(VERSION 3.5)

if(DEFINED ENV{GITHUB_RUN_NUMBER})
    project(JustArchitectureOfGraphicsEditor VERSION 0.0.$ENV{GITHUB_RUN_NUMBER})
else()
    project(JustArchitectureOfGraphicsEditor)
endif()

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


set(project_sources
    main.cpp
    main_window.cpp
    graphics_editor_controller.cpp
    graphics_editor_model.cpp
    graphics_view.cpp
    GraphicsShapes/graphics_shape.cpp
    GraphicsShapes/dot.cpp
    GraphicsShapes/circle.cpp
    GraphicsShapes/rectangle.cpp
    Data/document.cpp
    Data/file_handling_visitor.cpp
    Commands/commands.cpp
    Commands/file_command.cpp
    color.cpp
    rect.cpp
    )

add_executable(JustArchitectureOfGraphicsEditor ${project_sources} )

target_include_directories(JustArchitectureOfGraphicsEditor
    PUBLIC "${CMAKE_BINARY_DIR}"
)

if (MSVC)
    target_compile_options(JustArchitectureOfGraphicsEditor PRIVATE
        /W4
    )
else ()
    target_compile_options(JustArchitectureOfGraphicsEditor PRIVATE
        -Wall -Wextra -pedantic -Werror
    )
endif()

find_package(Threads REQUIRED)
target_link_libraries(JustArchitectureOfGraphicsEditor PRIVATE Threads::Threads)

install(TARGETS JustArchitectureOfGraphicsEditor RUNTIME DESTINATION bin)

set(CPACK_GENERATOR DEB)
set(CPACK_PACKAGE_VERSION_MAJOR "${PROJECT_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${PROJECT_VERSION_MINOR}")
set(CPACK_PACKAGE_VERSION_PATCH "${PROJECT_VERSION_PATCH}")

set(CPACK_PACKAGE_CONTACT example@example.com)

include(CPack)
