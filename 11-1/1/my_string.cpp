#include "my_string.h"
#include <iostream>


MyString& MyString::operator=(const MyString& b) {
    this->str = b.str;
    return *this;
}
MyString MyString::operator+(const MyString& b) {
    MyString mystring;
    mystring.str = this->str + b.str;
    return mystring;
}
MyString MyString::operator*(const int b) {
    MyString mystring;
    for (int i = 0; i < b; ++i) {
        mystring.str += this->str;
    }
    return mystring;
}
std::ostream& operator<<(std::ostream& out, MyString& my_string) {
    out << my_string.str << std::endl;
    return out;
}
std::istream& operator>>(std::istream& in, MyString& my_string){
    in >> my_string.str;
    return in;
}

