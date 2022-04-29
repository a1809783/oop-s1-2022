#include "Stock_item.h"

Stock_item::Stock_item(){
    _code_number = 0;

    _description = "null";
}

Stock_item::Stock_item(std::string description, int code_number){
    _code_number = code_number;
    _description = description;
}

std::string Stock_item::get_description(){
    return _description;
}

int Stock_item::get_item_number(){
    return _code_number;
}

Stock_item::~Stock_item(){
}