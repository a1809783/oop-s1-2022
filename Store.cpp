#include "Store.h"

Store::Store()
{
    _capacity = 0;
    _amount = 0;
}

Store::Store(int capacity){
    _capacity = capacity;
    _amount = 0;
    _stocks = new Stock_item[capacity];
};

int Store::get_total_stock_count(){
    return _amount;
};

int Store::get_stock_quantity(int item_number){
    int newAmount = 0;
    for (size_t i = 0; i < _amount; i++){
        if (_stocks[i]._code_number == item_number){
            newAmount = newAmount + 1;
        }
    }

    return newAmount;
};
Stock_item *Store::get_current_stock_list(){
    return _stocks;
};
bool Store::add_stock(Stock_item new_stock){
    if (_amount < _capacity){
        _stocks[_amount] = new_stock;
        _amount++;
        return true;
    }
    else{
        return false;
    }
};

Store::~Store(){
    delete _stocks;
}