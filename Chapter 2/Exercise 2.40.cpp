/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-10-13 14:20:21
 * @LastEditors: Yang
 * @LastEditTime: 2020-10-13 14:33:18
 * @FilePath: /Cpp_Primer/Chapter 2/Exercise 2.40.cpp
 */
/*
Exercise 2.40:
Write your own version of the Sales_data class.
*/

#include <string>
using namespace std;

class Sales_data {
   public:
    Sales_data(const string& bookNo = string(), unsigned units_sold = 0,
               double revenue = 0.0)
        : bookNo(bookNo), units_sold(units_sold), revenue(revenue) {}

    Sales_data(const Sales_data& s)
        : bookNo(s.bookNo), units_sold(s.units_sold), revenue(s.revenue) {}

   private:
    string bookNo;
    unsigned units_sold;
    double revenue;
};