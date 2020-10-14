/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-10-14 14:26:25
 * @LastEditors: Yang
 * @LastEditTime: 2020-10-14 14:27:45
 * @FilePath: /Cpp_Primer/Chapter 2/Exercise 2.42/Sales_data.h
 */
#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <iostream>
#include <string>
using namespace std;
class Sales_data {
   public:
    Sales_data() = default;
    Sales_data(const string& bookNo, unsigned u, double d)
        : bookNo(bookNo), units_sold(u), revenue(d) {}

    friend istream& operator>>(istream& is, Sales_data& s);
    friend ostream& operator<<(ostream& os, const Sales_data& s);

    Sales_data operator+(const Sales_data& s);

   private:
    string bookNo;
    unsigned units_sold;
    double revenue;
    double price;
};

istream& operator>>(istream& is, Sales_data& s) {
    is >> s.bookNo >> s.units_sold >> s.price;
    s.revenue = s.units_sold * s.price;
    return is;
}

ostream& operator<<(ostream& os, const Sales_data& s) {
    os << s.bookNo << " " << s.units_sold << " " << s.revenue;
    return os;
}

Sales_data Sales_data::operator+(const Sales_data& s) {
    if (this->bookNo == s.bookNo) {
        unsigned totalUnitsSold = this->units_sold + s.units_sold;
        double totalRevenue = this->revenue + s.revenue;
        return Sales_data(this->bookNo, totalUnitsSold, totalRevenue);
    } else {
        throw logic_error("Data must refer to the same ISBN");
    }
}
#endif