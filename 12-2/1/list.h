#include <iostream>
using namespace std;
template <class T>
class Node {
    public:
        T data;
        Node<T>* next;
        Node(const T& val) {
            data = val;
            next = nullptr;
        }
};

template <class T>
class List {
    private:
        Node<T> *head;
    public:
        List() {
            head = NULL;
        }
        ~List() {//free resources
            Node<T>* current = head;
            Node<T>* nextNode;
            while (current != nullptr) {
                nextNode = current->next;
                delete current;
                current = nextNode;
            }
        }
        List(T* arr, int n_nodes): head(nullptr) {//create a list with n_nodes
            for (int i = n_nodes - 1; i >= 0; i--) {
                push_front(arr[i]);
            }
        }
        void insert_at(int idx, const T& data) {
            Node<T>* newNode = new Node<T>(data);
            if (idx == 0) {
                newNode->next = head;
                head = newNode;
            } else {
                Node<T>* current = head;
                for (int i = 0; i < idx - 1 && current != nullptr; i++) {
                    current = current->next;
                }
                newNode->next = current->next;
                current->next = newNode;
            }
        }
        void remove_at(int idx) {
            Node<T>* temp;
            if (idx == 0) {
                temp = head;
                head = head->next;
            } else {
                Node<T>* current = head;
                for (int i = 0; i < idx - 1 && current != nullptr; i++) {
                    current = current->next;
                }
                temp = current->next;
                current->next = current->next->next;
            }
            delete temp;
        }
        void pop_back() {
            if (head->next == nullptr) {
                delete head;
                head = nullptr;
            }
            Node<T>* current = head;
            while (current->next->next != nullptr) {
                current = current->next;
            }
            delete current->next;
            current->next = nullptr;
        }
        void push_back(const T& val) {
            Node<T>* newNode = new Node<T>(val);
            if (head == nullptr) {
                head = newNode;
            } 
            else {
                Node<T>* current = head;
                while (current->next != nullptr) {
                    current = current->next;
                }
                current->next = newNode;
            }
        }
        void pop_front() {
            Node<T>* temp = head;
            head = head->next;
            delete temp;
        }
        void push_front(const T& val) {
            Node<T>* newNode = new Node<T>(val);
            newNode->next = head;
            head = newNode;
        }
        friend ostream& operator<<(ostream& out, List& rhs) {//print out nodes
            Node<T>* current = rhs.head;
            while (current != nullptr) {
                out << current->data;
                if (current->next != nullptr) {
                    out << ",";
                }
                current = current->next;
            }
        return out;
        }
};