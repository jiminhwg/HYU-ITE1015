#include "my_vector.h"

MyVector::MyVector() {
    this->length = 0;
    a = nullptr;
}

MyVector::MyVector(int length) {
    this->length = length;
    a = new double[length];
}
MyVector::~MyVector() {
    delete[] a;
}

MyVector& MyVector::operator=(const MyVector& b) {
    if (this != &b) {
        delete[] a;
        length = b.length;
        a = new double[length];
        for (int i = 0; i < length; ++i) {
            a[i] = b.a[i];
        }
    }
    return *this;
}

MyVector MyVector::operator+(const MyVector& b) {
    MyVector myvector(length);
    for (int i = 0; i < length; ++i) {
        myvector.a[i] = this->a[i] + b.a[i];
    }
    return myvector;
}

MyVector MyVector::operator-(const MyVector& b) {
    MyVector myvector(length);
    for (int i = 0; i < length; ++i) {
        myvector.a[i] = this->a[i] - b.a[i];
    }
    return myvector;
}

MyVector MyVector::operator+(const int b) {
    MyVector myvector(length);
    for (int i = 0; i < length; ++i) {
        myvector.a[i] = this->a[i] + b;
    }
    return myvector;
}

MyVector MyVector::operator-(const int b) {
    MyVector myvector(length);
    for (int i = 0; i < length; ++i) {
        myvector.a[i] = this->a[i] - b;
    }
    return myvector;
}

std::ostream& operator<<(std::ostream& out, MyVector& b) {
    for (int i = 0; i < b.length; ++i) {
        out << b.a[i] << " ";
    }
    out << std::endl;
    return out;
}

std::istream& operator>>(std::istream& in, MyVector& b) {
    for (int i = 0; i < b.length; ++i) {
        in >> b.a[i];
    }
    return in;
}
