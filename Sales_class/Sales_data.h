/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-10-14 14:26:25
 * @LastEditors: Yang
 * @LastEditTime: 2020-11-03 15:53:21
 * @FilePath: /Cpp_Primer/Sales_class/Sales_data.h
 */
#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <iostream>
#include <string>
using namespace std;
class Sales_data {
    friend istream& operator>>(istream& is, Sales_data& s);
    friend ostream& operator<<(ostream& os, const Sales_data& s);

   public:
    Sales_data() = default;
    Sales_data(const string& bookNo = string(""), unsigned u = 0,
               double d = 0.0)
        : bookNo(bookNo), units_sold(u), revenue(d) {}

    Sales_data operator+(const Sales_data& s);

    string isbn() const { return bookNo; }

    double avgPrice() const {
        if (units_sold != 0)
            return revenue / units_sold;
        else
            return 0;
    }

   private:
    string bookNo;
    unsigned units_sold;
    double revenue;
    double price;
};

#endif