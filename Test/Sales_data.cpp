#include "stdafx.h"
#include "Sales_data.h"

Sales_data::~Sales_data()
{
}

Sales_data& Sales_data::combine(const Sales_data&rhs)
{

	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}

double Sales_data::avg_price() const
{
	return units_sold ? revenue / units_sold : 0;
}
Sales_data add(const Sales_data& ls, const Sales_data& rs)
{
	Sales_data sum = ls;
	sum.combine(rs);
	return sum;
}
istream &read(istream &is, Sales_data &item)
{
	double price = 0.0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = price * item.units_sold;
	return is;
}
ostream &print(ostream &os, const Sales_data &item)
{
	os << item.bookNo << "  " << item.units_sold << "   "
		<< item.revenue << "  " << item.avg_price();
	return os;
}