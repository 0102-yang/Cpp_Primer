/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-10-11 13:30:51
 * @LastEditors: Yang
 * @LastEditTime: 2020-10-11 13:39:59
 * @FilePath: /Cpp_Primer/Chapter 1/Exercise 1.4.cpp
 */
/*
Exercise 1.4: Our program used the addtion operator, +, to
add two numbers. Write a program that uses the multiplication
operator, *, to print the product instead.
*/

#include <iostream>

int main() {
    int mul1 = 0, mul2 = 0;
    std::cin >> mul1 >> mul2;
    int product = mul1 * mul2;

    std::cout << "The product of " << mul1 << " and " << mul2 << " is "
              << product << "." << std::endl;

    return 0;
}