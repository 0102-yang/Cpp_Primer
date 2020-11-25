/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-10-25 10:55:15
 * @LastEditors: Yang
 * @LastEditTime: 2020-10-25 11:05:29
 * @FilePath: /Cpp_Primer/Chapter4/Exercise 4.6.cpp
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int num;
    cin >> num;
    cout << (num % 2 == 0 ? "It's even." : "It's odd.") << endl;

    return 0;
}