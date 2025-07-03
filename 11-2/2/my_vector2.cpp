#include "my_vector2.h"

MyVector2::MyVector2() {
    this->length = 0;
    a = nullptr;
}

MyVector2::MyVector2(int length) {
    this->length = length;
    a = new double[length];
}

MyVector2::MyVector2(const MyVector2& mv) {
    length = mv.length;
    a = new double[length];
    for (int i = 0; i < length; ++i) {
        a[i] = mv.a[i];
    }
}

MyVector2::~MyVector2() {
    delete[] a;
}

MyVector2 MyVector2::operator+(const MyVector2& b) {
    MyVector2 myvector2(length);
    for (int i = 0; i < length; ++i) {
        myvector2.a[i] = this->a[i] + b.a[i];
    }
    return myvector2;
}

MyVector2 MyVector2::operator-(const MyVector2& b) {
    MyVector2 myvector2(length);
    for (int i = 0; i < length; ++i) {
        myvector2.a[i] = this->a[i] - b.a[i];
    }
    return myvector2;
}

MyVector2 MyVector2::operator+(const int b) {
    MyVector2 myvector2(length);
    for (int i = 0; i < length; ++i) {
        myvector2.a[i] = this->a[i] + b;
    }
    return myvector2;
}

MyVector2 MyVector2::operator-(const int b) {
    MyVector2 myvector2(length);
    for (int i = 0; i < length; ++i) {
        myvector2.a[i] = this->a[i] - b;
    }
    return myvector2;
}

std::ostream& operator<<(std::ostream& out, MyVector2& b) {
    for (int i = 0; i < b.length; ++i) {
        out << b.a[i] << " ";
    }
    out << std::endl;
    return out;
}

std::istream& operator>>(std::istream& in, MyVector2& b) {
    for (int i = 0; i < b.length; ++i) {
        in >> b.a[i];
    }
    return in;
}
