/*
 * @Author: Yang
 * @Copyright: Yang
 * @Date: 2020-11-03 14:36:49
 * @LastEditors: Yang
 * @LastEditTime: 2020-11-03 14:39:51
 * @FilePath: /Cpp_Primer/Sales_class/Sales_item.cpp
 */
#include "Sales_item.h"

ostream& operator<<(ostream& out, const Sales_item& si) {
    out << si.m_ISBN << " " << si.m_copies << " " << si.m_price;
    return out;
}

istream& operator>>(istream& in, Sales_item& si) {
    in >> si.m_ISBN >> si.m_copies >> si.m_price;
    return in;
}