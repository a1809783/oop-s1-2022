#ifndef _MyStockitem
#define _MyStockitem

#include <iostream>
#include <string>

class Stock_item
{
public:
    std::string _description;
    int _code_number;

public:
    Stock_item();
    Stock_item(std::string description, int code_number);
    std::string get_description();
    int get_item_number();
    ~Stock_item();
};

#endif