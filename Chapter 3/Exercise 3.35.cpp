/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-10-18 14:29:04
 * @LastEditors: Yang
 * @LastEditTime: 2020-10-18 14:35:02
 * @FilePath: /Cpp_Primer/Chapter 3/Exercise 3.35.cpp
 */
/*
Exercise 3.35:
Using pointers, write a program to set the elements in an array to zero.
*/

#include <iostream>

int main() {
    constexpr int size = 15;
    int arr[size]{1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5};

    int *ptr = arr;
    for (int i = 0; i < size; i++) *ptr++ = 0;

    ptr = arr;
    for (int i = 0; i < size; i++) std::cout << *ptr++ << " ";
    std::cout << std::endl;

    return 0;
}