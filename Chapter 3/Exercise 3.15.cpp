/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-10-14 15:28:05
 * @LastEditors: Yang
 * @LastEditTime: 2020-10-14 15:30:22
 * @FilePath: /Cpp_Primer/Chapter 3/Exercise 3.15.cpp
 */
/*
Exercise 3.15:
Repeat the previous program but read strings this time.
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<string> v;
    string temp;

    while (cin >> temp) v.push_back(temp);

    for (auto s : v) cout << s << endl;

    return 0;
}