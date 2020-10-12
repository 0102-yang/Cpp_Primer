/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-10-11 20:21:46
 * @LastEditors: Yang
 * @LastEditTime: 2020-10-11 20:24:30
 * @FilePath: /Cpp_Primer/Chapter 1/Exercise 1.16.cpp
 */
/*
Exercise 1.16:
Write your own version of a program that prints the
sum of a set of integers read from cin.
*/

#include <iostream>

using namespace std;

int main() {
    int temp, sum = 0;

    while (cin >> temp) {
        if (temp == 0) break;
        sum += temp;
    }

    cout << "The sum of this set of integers is " << sum << endl;

    return 0;
}