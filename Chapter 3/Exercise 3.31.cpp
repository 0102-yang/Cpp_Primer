/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-10-18 14:20:25
 * @LastEditors: Yang
 * @LastEditTime: 2020-10-18 14:24:21
 * @FilePath: /Cpp_Primer/Chapter 3/Exercise 3.31.cpp
 */
/*
Exercise 3.31:
Write a program to define an array of ten ints. Give
each element the same value as its position in the array.
*/

#include <array>
#include <iostream>
using namespace std;

int main() {
    constexpr unsigned size = 10;
    array<int, size> a;
    size_t si = a.size();

    for (int i = 0; i < si; i++) a[i] = i;

    for (auto i : a) cout << i << " ";
    cout << endl;
    return 0;
}