/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-10-18 15:47:58
 * @LastEditors: Yang
 * @LastEditTime: 2020-10-18 16:04:04
 * @FilePath: /Cpp_Primer/Chapter 3/Exercise 3.43.cpp
 */
/*
Exercise 3.43:
Write three different versions of a program to print the elements
of ia. One version should use a range for to manage the iteration,
the other two should use an ordinary for loop in one case using
subscripts and in the other using pointers. In all three programs
write all the types directly. That is, do not use a type alias,
auto, or decltype to simplify the code.
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    constexpr size_t rowCnt = 3, colCnt = 4;
    int ia[rowCnt][colCnt];
    for (size_t i = 0; i != rowCnt; ++i) {
        for (size_t j = 0; j != colCnt; ++j) {
            ia[i][j] = i * colCnt + j;
        }
    }

    /* version 1 */
    cout << "Version 1:" << endl;
    for (const auto &r : ia) {
        for (auto e : r) cout << e << ' ';
        cout << endl;
    }

    /* version 2 */
    cout << "Version 2:" << endl;
    for (size_t i = 0; i < rowCnt; i++) {
        for (size_t j = 0; j < colCnt; j++) cout << ia[i][j] << ' ';
        cout << endl;
    }

    /* version 3 */
    cout << "Version 3:" << endl;
    for (auto row = ia; row != ia + rowCnt; ++row) {
        for (auto col = *row; col != *row + colCnt; ++col) cout << *col << ' ';
        cout << endl;
    }

    return 0;
}