#include<string>
#include<set>

std::set<int> parseSet(const std::string& str);
void print(const std::set<int>&);
std::set<int> getIntersection(const std::set<int>& set0, const std::set<int>& set1);
std::set<int> getUnion(const std::set<int>& set0, const std::set<int>& set1);
std::set<int> getDifference(const std::set<int>& set0, const std::set<int>& set1);