/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-10-14 14:56:19
 * @LastEditors: Yang
 * @LastEditTime: 2020-10-14 15:02:57
 * @FilePath: /Cpp_Primer/Chapter 3/Exercise 3.5.cpp
 */
/*
Exercise 3.5:
Write a program to read strings from the standard input,
concatenating what is read into one large string. Print
the concatenated string. Next, change the program to sep-
arate adjacent input strings by a space.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string temp, sum = "";

    while (cin >> temp) {
        if (sum == "")
            sum += temp;
        else {
            sum += (" " + temp);
        }
    }

    cout << sum << endl;

    return 0;
}