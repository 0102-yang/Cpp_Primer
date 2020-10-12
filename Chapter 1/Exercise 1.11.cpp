/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-10-11 20:05:12
 * @LastEditors: Yang
 * @LastEditTime: 2020-10-11 20:12:53
 * @FilePath: /Cpp_Primer/Chapter 1/Exercise 1.11.cpp
 */
/*
Exercise 1.11:
Write a program that prompts the user for two integers.
Print each number in the range specified by those two
integers.
*/

#include <iostream>
using namespace std;

int main() {
    int low, high;
    cout << "Please enter two integers:" << endl;
    cin >> low >> high;

    if (low > high) swap(low, high);

    while (low <= high) cout << low++ << " ";

    cout << endl;

    return 0;
}