/*
Exercise 3.23:
Write a program to create a vecotr with ten int element.
Using ana iterator, assign each element a value that is
twice its current value. Test your program by printing
the vector.
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (auto& n : v) n *= 2;
    for (auto n : v) cout << n << " ";
    cout << endl;
    return 0;
}