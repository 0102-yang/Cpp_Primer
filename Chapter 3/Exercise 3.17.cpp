/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-10-14 15:33:33
 * @LastEditors: Yang
 * @LastEditTime: 2020-10-14 15:48:30
 * @FilePath: /Cpp_Primer/Chapter 3/Exercise 3.17.cpp
 */
/*
Exercise 3.17:
Read a sequence of words from cin and store the values
in a vector. After you've read all the words, process
the vector and change each word to uppercase. Print the
transformed elements, eight words to a line.
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string temp;
    vector<string> v;

    while (cin >> temp) v.push_back(temp);

    for (auto& s : v)
        for (auto& c : s)
            if (islower(c)) c = toupper(c);

    int cnt = 0;
    for (auto s : v) {
        cout << s << " ";
        if ((cnt++) / 7 == 1) {
            cout << endl;
            cnt = 0;
        }
    }
    if (cnt != 0) cout << endl;

    return 0;
}