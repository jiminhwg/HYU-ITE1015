#ifndef __STRING_H__
#define __STRING_H__

#include<iostream>

// Do not modify this class definition except the declaration for constructor
class MyString2
{
public:
    MyString2() {}
    MyString2(const MyString2& b);
    // Add constructors you need, including copy constructor
    // Do not use the assignment operator.
    // Do not correct this because the goal is to prevent using the assignment operator.
    MyString2& operator=(const MyString2& b) { return *this; }

    // Just use the same implementations for these operators
    MyString2 operator+(const MyString2& b);
    MyString2 operator*(const int b);
    friend std::ostream& operator<<(std::ostream& out, MyString2& my_string);
    friend std::istream& operator>>(std::istream& in, MyString2& my_string);

private:
    std::string str;
};

#endif