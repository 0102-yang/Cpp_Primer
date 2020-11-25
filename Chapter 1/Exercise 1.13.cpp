/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-10-11 20:11:50
 * @LastEditors: Yang
 * @LastEditTime: 2020-10-11 20:16:38
 * @FilePath: /Cpp_Primer/Chapter 1/Exercise 1.13.cpp
 */
/*
Exercise 1.13:
Rewrite the exercises from & 1.4.1 (p. 13) using for loops.
*/

#include <iostream>

int main() {
    int sum = 0;

    for (int val = 1; val <= 10; val++) sum += val;

    std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;

    return 0;
}