// Test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Sales_data.h"
#include <iostream>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	Sales_data item("978-7-121-15535-2");
	Sales_data item2("978-7-121-15535-2", 4, 90.0), item3, item4;
	cout << "The ISBN of the reading book which named C++ primer  is: " << item.isbn() << endl;
	item3 = add(item, item2);
	print(cout, item3);
	cout << endl;
	read(cin, item4);
	print(cout, item4);
	cout << endl;
	return 0;
}

