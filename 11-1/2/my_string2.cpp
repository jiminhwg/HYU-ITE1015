#include "my_string2.h"
#include <iostream>

MyString2::MyString2(const MyString2& b) {
    str = b.str;
}

MyString2 MyString2::operator+(const MyString2& b) {
    MyString2 mystring;
    mystring.str = this->str + b.str;
    return mystring;
}
MyString2 MyString2::operator*(const int b) {
    MyString2 mystring;
    for (int i = 0; i < b; ++i) {
        mystring.str += this->str;
    }
    return mystring;
}
std::ostream& operator<<(std::ostream& out, MyString2& my_string) {
    out << my_string.str << std::endl;
    return out;
}
std::istream& operator>>(std::istream& in, MyString2& my_string){
    in >> my_string.str;
    return in;
}

