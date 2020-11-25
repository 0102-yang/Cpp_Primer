/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-10-11 13:44:26
 * @LastEditors: Yang
 * @LastEditTime: 2020-10-11 13:53:20
 * @FilePath: /Cpp_Primer/Chapter 1/Exercise 1.6.cpp
 */
/*
Exercise 1.6:
Explain whether the following program fragment is legal.
'''
std::cout << "The sum of " << v1;
          << " and " << v2;
          << " is " << v1 + v2 << std::endl;

'''
If the program is legal, what does it do? If the program is not legal,
why not? How would you fix it?
*/
/*
Answer:
The program is not legal. Because every single line is ended
with a semicolon. It means 'cout' is only useful for the first line.
And it will trigger a compilation error.
I will fix it with following lines.
*/
#include <iostream>

int main() {
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The sum of " << v1;
    std::cout << " and " << v2;
    std::cout << " is " << v1 + v2 << std::endl;

    return 0;
}