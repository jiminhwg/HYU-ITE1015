#include "sorted.h"
#include <iostream>

using namespace std;

SortedArray::SortedArray() {
    numbers_ =vector<int>();
}
SortedArray::~SortedArray() { 
}
void SortedArray::AddNumber(int num) {
    numbers_.push_back(num);
}
vector<int> SortedArray::GetSortedAscending() {
    vector<int> sorted = numbers_;
    sort(sorted.begin(), sorted.end());
    return sorted;
}
vector<int> SortedArray::GetSortedDescending() {
    vector<int> sorted = numbers_;
    sort(sorted.begin(), sorted.end(), greater<int>());
    return sorted;
}
int SortedArray::GetMax() {
    return *max_element(numbers_.begin(), numbers_.end());
}
int SortedArray::GetMin() {
    return *min_element(numbers_.begin(), numbers_.end());
}