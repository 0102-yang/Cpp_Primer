/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-10-14 14:25:13
 * @LastEditors: Yang
 * @LastEditTime: 2020-10-14 14:32:42
 * @FilePath: /Cpp_Primer/Chapter 2/Exercise 2.42/Exercise 2.42.cpp
 */
/*
Exercise 2.42:
Write your own version of the Sales_data.h header and use
it to rewrite the exercise from & 2.6.2 (p. 76).
*/

#include <iostream>
#include <string>

#include "Sales_data.h"

int main() {
    Sales_data s1, s2, sum;

    cin >> s1 >> s2;
    sum = s1 + s2;

    cout << sum << endl;

    return 0;
}