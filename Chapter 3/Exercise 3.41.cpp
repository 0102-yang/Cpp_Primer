/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-10-18 15:23:21
 * @LastEditors: Yang
 * @LastEditTime: 2020-10-18 15:25:47
 * @FilePath: /Cpp_Primer/Chapter 3/Exercise 3.41.cpp
 */
/*
Exercise 3.41:
Write a program to initialize a vector from an array of ints.
*/

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[]) {
    int array[20]{1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    vector<int> v(begin(array), end(array));

    for (auto i : v) cout << i << " ";
    cout << endl;

    return 0;
}