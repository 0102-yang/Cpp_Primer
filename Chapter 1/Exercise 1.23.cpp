/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-10-12 16:47:33
 * @LastEditors: Yang
 * @LastEditTime: 2020-10-12 16:57:52
 * @FilePath: /Cpp_Primer/Chapter 1/Exercise 1.23.cpp
 */
/*
Exercise 1.23:
Write a program that reads several transactions and
counts how many transactions occur each ISBN.
*/

#include <iostream>
#include <map>
#include <string>
using namespace std;

class Sales_item {
   public:
    Sales_item(const string& isbn = string(""), int copies = 0,
               double price = 0.0)
        : ISBN(isbn), copies(copies), price(price) {}

    friend ostream& operator<<(ostream& out, const Sales_item& si) {
        out << si.ISBN << " " << si.copies << " " << si.price;
        return out;
    }

    friend istream& operator>>(istream& in, Sales_item& si) {
        in >> si.ISBN >> si.copies >> si.price;
        return in;
    }

    string getISBN() const { return ISBN; }

   private:
    string ISBN;
    int copies;
    double price;
};

int main() {
    string temp;
    int copies;
    double price;
    map<string, size_t> m;
    cout << "Please enter the information('#' to quit)" << endl;

    while (cin >> temp) {
        if (temp == "#") break;
        cin >> copies >> price;
        m[Sales_item(temp, copies, price).getISBN()]++;
    }

    for (const auto& pair : m) {
        cout << "ISBN " << pair.first << " has occured " << pair.second
             << (pair.second > 1 ? " times." : " time.") << endl;
    }

    return 0;
}