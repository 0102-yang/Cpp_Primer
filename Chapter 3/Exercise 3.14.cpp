/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-10-14 15:22:16
 * @LastEditors: Yang
 * @LastEditTime: 2020-10-14 15:27:02
 * @FilePath: /Cpp_Primer/Chapter 3/Exercise 3.14.cpp
 */
/*
Exercise 3.14:
Write a program to read a sequence of ints from cin
and store those values in a vector.
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int temp;
    vector<int> v;

    while (cin >> temp) v.push_back(temp);

    for (auto i : v) cout << i << " ";
    cout << endl;

    return 0;
}