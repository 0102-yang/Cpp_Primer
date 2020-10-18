/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-10-14 14:36:50
 * @LastEditors: Yang
 * @LastEditTime: 2020-10-14 14:40:07
 * @FilePath: /Cpp_Primer/Chapter 3/Exercise 3.1.cpp
 */
/*
Exercise 3.1:
Rewrite the exercises from & 1.4.1 (p. 13) and & 2.6.2 (p. 76)
with appropriate using declarations.
*/
/*
Only 1.4.1
*/

#include <iostream>
using std::cout;
using std::endl;

int main() {
    int sum = 0, val = 1;

    while (val <= 10) {
        sum += val;
        ++val;
    }

    cout << "Sum of 1 to 10 inclusive is " << sum << endl;

    return 0;
}