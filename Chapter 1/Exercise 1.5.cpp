/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-10-11 13:35:08
 * @LastEditors: Yang
 * @LastEditTime: 2020-10-11 13:43:26
 * @FilePath: /Cpp_Primer/Chapter 1/Exercise 1.5.cpp
 */
/*
Exercise 1.5: We wrote the output in one large statement.
Rewrite the program to use a separate statement to print
each operand.
*/

#include <iostream>

int main() {
    int add1 = 0, add2 = 0;
    std::cin >> add1 >> add2;

    std::cout << "The sum of ";
    std::cout << add1 << " and " << add2;
    std::cout << " is " << add1 + add2 << "." << std::endl;

    return 0;
}