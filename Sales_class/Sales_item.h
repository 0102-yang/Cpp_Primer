/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-11-03 14:23:18
 * @LastEditors: Yang
 * @LastEditTime: 2020-11-03 14:41:01
 * @FilePath: /Cpp_Primer/Sales_class/Sales_item.h
 */
#ifndef SALES_ITEM_H
#define SALES_ITEM_H
#include <iostream>
#include <string>
using namespace std;
class Sales_item {
    friend ostream& operator<<(ostream& out, const Sales_item& si);
    friend istream& operator>>(istream& in, Sales_item& si);

   public:
    Sales_item(const string& isbn = string(""), int copies = 0,
               double price = 0.0)
        : m_ISBN(isbn), m_copies(copies), m_price(price) {}

    string getISBN() const { return m_ISBN; }

   private:
    string m_ISBN;   // the ISBN of a book
    int m_copies;    // the amount of the books
    double m_price;  // the price of per book
};
#endif  // SALES_ITEM_H