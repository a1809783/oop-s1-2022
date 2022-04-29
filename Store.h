#ifndef _MyStore
#define _MyStore

#include <iostream>
#include <string>

#include "Stock_item.h"

class Store{
public:
    int _amount;
    int _capacity;
    Stock_item *_stocks;

public:
    Store();
    Store(int capacity);
    int get_total_stock_count();
    int get_stock_quantity(int item_number);
    Stock_item *get_current_stock_list();
    bool add_stock(Stock_item new_stock);
    ~Store();
};

#endif
