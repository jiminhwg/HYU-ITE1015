#include <iostream>
#pragma once
template <class T>
class MyContainer {
public:
    MyContainer(int size) {
        this->n_elements = size;
        obj_arr = new T[size];
    }
    ~MyContainer() {
        clear();
    }
    void clear() {
        if (obj_arr != nullptr) {
            delete[] obj_arr;
            obj_arr = nullptr;
        }
        n_elements = 0;
    }
    int size() {
        return n_elements;
    }
    template <class U>
    friend std::istream& operator>> (std::istream &in, MyContainer<U> &b);
    template <class U>
    friend std::ostream& operator<< (std::ostream &out, MyContainer<U>
    &b);
protected:
    T * obj_arr = NULL;
    int n_elements;
};

template<class T>
std::istream& operator>> (std::istream &in, MyContainer<T> &b) {
    for (int i = 0; i < b.n_elements; ++i) {
        in >> b.obj_arr[i];
    }
    return in;
}
template<class T>
std::ostream& operator<< (std::ostream &out, MyContainer<T> &b) {
    for (int i = 0; i < b.n_elements; ++i) {
        out << b.obj_arr[i] << " ";
    }
    out << std::endl;
    return out;
}