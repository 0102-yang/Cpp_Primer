/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-10-18 14:35:31
 * @LastEditors: Yang
 * @LastEditTime: 2020-10-18 14:52:15
 * @FilePath: /Cpp_Primer/Chapter 3/Exercise 3.36.cpp
 */
/*
Exercise 3.36:
Write a program to compare two arrays for equality. Write
a similar program to compare two vectors.
*/

#include <iostream>
#include <vector>
using namespace std;

bool compareTwoVector(const vector<int> &v1, const vector<int> &v2);

int main(int argc, char const *argv[]) {
    vector<int> v1{1, 2, 3, 4, 5}, v2{2, 3, 4, 5, 6};
    cout << compareTwoVector(v1, v2) << endl;

    return 0;
}

bool compareTwoVector(const vector<int> &v1, const vector<int> &v2) {
    if (v1.size() != v2.size()) return false;

    unsigned size = v1.size();
    for (unsigned i = 0; i < size; i++)
        if (v1.at(i) != v2.at(i)) return false;

    return true;
}