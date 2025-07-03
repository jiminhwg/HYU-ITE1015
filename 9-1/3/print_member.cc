#include <iostream>
using namespace std;

class A {
    public: 
        A(int object) {
            memberA = new int(object);
            cout << "new memberA" << endl;
        }
        virtual ~A() {
            delete memberA;
            cout << "delete memberA" << endl;
        }
        virtual void print() {
            cout << "*memberA " << *memberA << endl;
        }
    private:
        int* memberA;
};

class B: public A {
    public: 
        B(double object): A(1)  {
            memberB = new double(object);
            cout << "new memberB" << endl;
        }
        virtual ~B() {
            delete memberB;
            cout << "delete memberB" << endl;
        }
        virtual void print() {
            A::print();
            cout << "*memberB " <<  *memberB << endl;
        }
    private:
        double* memberB;
            
};

class C: public B {
    public: 
        C(const string& object): B(1.1)  {
            memberC = new string(object);
            cout << "new memberC" << endl;
        }
        virtual ~C() {
            delete memberC;
            cout << "delete memberC" << endl;
        }
        virtual void print() {
            B::print();
            cout << "*memberC " << *memberC << endl;
        }
    private:
        string* memberC;
};

int main() {
    int integer;
    double real_num;
    string words;
    cin >> integer >> real_num >> words;
    vector<A*> arr;
    A* a1 = new A(integer);
    A* a2 = new B(real_num);
    A* a3 = new C(words);
    arr.push_back(a1);
    arr.push_back(a2);
    arr.push_back(a3);

    for (int i = 0; i < arr.size();i++) {
       arr[i]->print();
    }
    
    delete a1; delete a2; delete a3;
}