/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-10-18 15:39:55
 * @LastEditors: Yang
 * @LastEditTime: 2020-10-18 15:45:40
 * @FilePath: /Cpp_Primer/Chapter 3/Exercise 3.42.cpp
 */
/*
Exercise 3.42:
Write a program to copy a vector of ints into an array of ints.
*/
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[]) {
    vector<int> v{1, 2, 3, 4, 5, 6, 76, 8, 9, 0, 32, 4, 5, 23, 32, 4, 5, 23, 1};
    int *arr = new int[v.size()];
    int *ptr = arr;

    for (auto e : v) *ptr++ = e;

    ptr = arr;
    auto size = v.size();
    for (size_t i = 0; i < size; i++) cout << *ptr++ << " ";
    cout << endl;

    return 0;
}