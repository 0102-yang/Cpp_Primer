/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-10-11 20:01:45
 * @LastEditors: Yang
 * @LastEditTime: 2020-10-11 20:08:22
 * @FilePath: /Cpp_Primer/Chapter 1/Exercise 1.10.cpp
 */
/*
Exercise 1.10:
In addition to the ++ operator that adds 1 to its operand,
there is a decrement operator(--) that subtracts 1. Use
the decrement operator to write a while that prints the
numbers from ten down to zero.
*/

#include <iostream>

int main() {
    int number = 10;

    while (number >= 0) std::cout << number-- << " ";

    std::cout << std::endl;
    return 0;
}