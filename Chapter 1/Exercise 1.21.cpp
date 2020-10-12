/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-10-12 10:44:52
 * @LastEditors: Yang
 * @LastEditTime: 2020-10-12 11:13:16
 * @FilePath: /Cpp_Primer/Chapter 1/Exercise 1.21.cpp
 */
/*
Exercise 1.21:
Write a program that reads two Sales_item objects that
have the same ISBN and produces their sum.
*/

#include <iostream>
#include <string>
using namespace std;

class Sales_item {
   public:
    Sales_item(const string& isbn = string(), int copies = 0,
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

    Sales_item operator+(const Sales_item& si) {
        if (this->ISBN != si.ISBN)
            throw runtime_error(
                "Can not add these two objects(MUST have same ISBN).");

        int copiesSum = this->copies + si.copies;
        double newPrice =
            (this->copies * this->price + si.copies * si.price) / copiesSum;
        return Sales_item(this->ISBN, copiesSum, newPrice);
    }

   private:
    string ISBN;
    int copies;
    double price;
};

int main() {
    Sales_item item1, item2;
    cin >> item1 >> item2;
    cout << item1 + item2 << endl;
    return 0;
}