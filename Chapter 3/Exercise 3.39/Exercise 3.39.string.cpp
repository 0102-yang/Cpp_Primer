/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-10-18 14:54:22
 * @LastEditors: Yang
 * @LastEditTime: 2020-10-18 15:02:22
 * @FilePath: /Cpp_Primer/Chapter 3/Exercise 3.39/Exercise 3.39.string.cpp
 */

#include <iostream>
#include <string>
using namespace std;

bool compareTwoStrings(const string &s1, const string &s2);

int main(int argc, char const *argv[]) {
    string s1("Hello world"), s2("Hello World");
    cout << compareTwoStrings(s1, s2) << endl;

    return 0;
}

bool compareTwoStrings(const string &s1, const string &s2) {
    if (s1.size() != s2.size()) return false;

    auto size = s1.size();
    for (size_t i = 0; i < size; i++)
        if (s1[i] != s2[i]) return false;

    return true;
}