/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-10-12 11:15:38
 * @LastEditors: Yang
 * @LastEditTime: 2020-10-12 16:43:16
 * @FilePath: /Cpp_Primer/Chapter 1/Exercise 1.22.cpp
 */
/*
Exercise 1.22:
Write a program that reads several transactions for
the same ISBN. Write the sum of all the transactions
that were read.
*/

#include <iostream>
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

    Sales_item operator+(const Sales_item& si) {
        if (this->ISBN != si.ISBN)
            throw runtime_error(
                "Can not add these two objects(MUST have same ISBN).");

        int copiesSum = this->copies + si.copies;
        double newPrice =
            (this->copies * this->price + si.copies * si.price) / copiesSum;
        return Sales_item(this->ISBN, copiesSum, newPrice);
    }

    Sales_item& operator+=(const Sales_item& si) {
        if (this->ISBN == "")
            this->ISBN = si.ISBN;
        else if (this->ISBN != si.ISBN)
            throw runtime_error(
                "Can not add these two objects(MUST have same ISBN).");

        this->copies += si.copies;
        this->price =
            (this->copies * this->price + si.copies * si.price) / this->copies;
        return *this;
    }

   private:
    string ISBN;
    int copies;
    double price;
};

int main() {
    Sales_item sum;
    string temp;
    int copies;
    double price;
    cout << "Please enter the information('#' to quit)" << endl;

    while (cin >> temp) {
        if (temp == "#") break;
        cin >> copies >> price;
        sum += Sales_item(temp, copies, price);
    }
    cout << sum << endl;

    return 0;
}