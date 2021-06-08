#ifndef DOCUMENT_H
#define DOCUMENT_H
#include <iostream>
#include <string>


class Document {
public:

    Document() = default;

    void load(const std::string &text);
    void saveAs(const std::string &name);
private:
    std::string m_text;
};

#endif // DOCUMENT_H
