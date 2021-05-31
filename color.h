#ifndef COLOR_H
#define COLOR_H
#include <iostream>


class Color
{
public:
    Color();
    Color(const u_int8_t r, u_int8_t g, u_int8_t b);

private:
    u_int8_t m_R;
    u_int8_t m_G;
    u_int8_t m_B;
};

#endif // COLOR_H
