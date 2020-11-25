/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-10-18 15:02:01
 * @LastEditors: Yang
 * @LastEditTime: 2020-10-18 15:07:46
 * @FilePath: /Cpp_Primer/Chapter 3/Exercise 3.39/Exercise 3.39.C-style.cpp
 */
#include <string.h>

#include <iostream>
using namespace std;

bool compareTwoCStrings(const char *c1, const char *c2);

int main(int argc, char const *argv[]) {
    const char *arr1 = "Hello world", *arr2 = "Hello world";
    cout << compareTwoCStrings(arr1, arr2) << endl;

    return 0;
}

bool compareTwoCStrings(const char *c1, const char *c2) {
    if (strlen(c1) != strlen(c2)) return false;

    auto size = strlen(c1);
    for (size_t i = 0; i < size; i++)
        if (*c1++ != *c2++) return false;

    return true;
}