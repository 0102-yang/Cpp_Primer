/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-11-03 14:41:38
 * @LastEditors: Yang
 * @LastEditTime: 2020-11-03 14:44:05
 * @FilePath: /Cpp_Primer/Sales_class/Sales_data.cpp
 */
#include "Sales_data.h"

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
    if (this->bookNo != s.bookNo)
        throw logic_error("Data must refer to the same ISBN");

    unsigned totalUnitsSold = this->units_sold + s.units_sold;
    double totalRevenue = this->revenue + s.revenue;
    return Sales_data(this->bookNo, totalUnitsSold, totalRevenue);
}