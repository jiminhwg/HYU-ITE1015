#include "message.h"
using namespace std;

MessageBook::MessageBook() {
    message_ = map<int, string>();
}
MessageBook::~MessageBook() {
}
void MessageBook::AddMessage(int number, const string& message) {
    message_[number] = message;

}
void MessageBook::DeleteMessage(int number) {
    message_.erase(number);
}
vector<int> MessageBook::GetNumbers() {
    vector<int>vtr; 
    for(auto i : message_) {
        vtr.push_back((i.first));
    }
    return vtr;
}
const string& MessageBook::GetMessage(int number) {
    return message_.at(number);
}