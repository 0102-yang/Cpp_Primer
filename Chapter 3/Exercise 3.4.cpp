/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-10-14 14:39:32
 * @LastEditors: Yang
 * @LastEditTime: 2020-10-14 15:19:02
 * @FilePath: /Cpp_Primer/Chapter 3/Exercise 3.4.cpp
 */
/*
Exercise 3.4:
Write a program to read two strings and report whether the strings
are equal. If not, report which of the two is larger. Now change
the program to report whether the strings have the same length, and
if not, report which is longer.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;

    cin >> s1 >> s2;

    if (s1.length() == s2.length())
        cout << "s1 and s2 have same length." << endl;
    else if (s1.length() > s2.length())
        cout << "The length of s1 is longer." << endl;
    else
        cout << "The length of s2 is longer." << endl;

    return 0;
}