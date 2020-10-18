/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-10-14 15:07:31
 * @LastEditors: Yang
 * @LastEditTime: 2020-10-14 15:09:15
 * @FilePath: /Cpp_Primer/Chapter 3/Exercise 3.6.cpp
 */
/*
Exercise 3.6:
Use a range for to change all the characters in
a string to X.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    for (auto& c : s) c = 'X';

    cout << s << endl;

    return 0;
}