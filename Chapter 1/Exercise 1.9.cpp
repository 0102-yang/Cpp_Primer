/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-10-11 19:58:47
 * @LastEditors: Yang
 * @LastEditTime: 2020-10-11 20:08:30
 * @FilePath: /Cpp_Primer/Chapter 1/Exercise 1.9.cpp
 */
/*
Exercise 1.9:
Write a program that uses a while to sum the numbers from 50 to 100.
*/
#include <iostream>

int main() {
    int sum = 0;
    int number = 50;

    while (number < 101) sum += number++;

    std::cout << "The sum of the numbers from 50 to 100 is " << sum << "."
              << std::endl;

    return 0;
}