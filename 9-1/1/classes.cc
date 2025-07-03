#include <iostream>
using namespace std;

class A {
    public: 
        virtual string test() {
            return "A::test()";
        }
};

class B: public A {
    public: 
        virtual string test() {
            return "B::test()";
        }
            
};

class C: public B {
    public: 
        virtual string test() {
            return "C::test()";
        }
};


int main() {
    vector<A*> arr;
    A* a1 = new A;
    A* a2 = new B;
    A* a3 = new C;
    arr.push_back(a1);
    arr.push_back(a2);
    arr.push_back(a3);

    for (int i = 0; i < arr.size();i++) {
        cout << arr[i]->test() << endl;
    }
    delete a1; delete a2; delete a3;
}