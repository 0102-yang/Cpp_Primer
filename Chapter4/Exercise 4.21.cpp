/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-10-25 17:39:23
 * @LastEditors: Yang
 * @LastEditTime: 2020-10-25 18:02:47
 * @FilePath: /Cpp_Primer/Chapter4/Exercise 4.21.cpp
 */
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[]) {
    int num;
    vector<int> nums;
    while (cin >> num) nums.push_back(num);

    for (int &e : nums)
        if (e % 2 != 0) e *= 2;

    for (int e : nums) cout << e << ' ';
    cout << endl;

    return 0;
}