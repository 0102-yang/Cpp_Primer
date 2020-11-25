/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-10-14 15:52:46
 * @LastEditors: Yang
 * @LastEditTime: 2020-10-14 16:03:47
 * @FilePath: /Cpp_Primer/Chapter 3/Exercise 3.20.cpp
 */
/*
Exercise 3.20:
Read a set of integers into a vector. Print the sum of
each pair of adjacent elements. Change your program so
that it prints the sum of the furst and last elements,
followed by the sum of the second and second-to-last,
and so on.
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    int temp;

    while (cin >> temp) v.push_back(temp);

    int start = 0, end = v.size() - 1, sum;
    while (start < end) {
        sum = v[start++] + v[end--];
        cout << sum << " ";
    }
    cout << endl;
    return 0;
}