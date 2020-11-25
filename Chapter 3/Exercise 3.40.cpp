/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-10-18 15:10:09
 * @LastEditors: Yang
 * @LastEditTime: 2020-10-18 15:21:50
 * @FilePath: /Cpp_Primer/Chapter 3/Exercise 3.40.cpp
 */
/*
Exercise 3.40:
Write a program to define two character arrays initialized from
string literals. Now define a third character array to hold the
concatenation of the two arrays. Use strcpy and strcat to copy
the two arrays into the third.
*/

#include <string.h>

#include <iostream>
using namespace std;

char *concatenate(char *dest, const char *c1, const char *c2);

int main(int argc, char const *argv[]) {
    const char *c1 = "Hello", *c2 = "World!";
    char *dest = NULL;
    cout << concatenate(dest, c1, c2) << endl;
    delete dest;

    return 0;
}

char *concatenate(char *dest, const char *c1, const char *c2) {
    if (dest != NULL) delete dest;
    size_t len = strlen(c1) + strlen(c2) + 1;

    dest = new char[len];

    strcpy(dest, c1);
    return strcat(dest, c2);
}