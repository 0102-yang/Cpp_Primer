/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-10-14 15:10:55
 * @LastEditors: Yang
 * @LastEditTime: 2020-10-14 15:18:46
 * @FilePath: /Cpp_Primer/Chapter 3/Exercise 3.10.cpp
 */
/*
Exercise 3.10:
Write a program that reads a string of characters including
punctuation and writes what was read but with the punctuation
removed.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string input, ret;
    cin >> input;

    for (auto c : input)
        if (!ispunct(c)) ret.push_back(c);

    cout << ret << endl;

    return 0;
}