#include <iostream>
#include <string>

#include "meerkat.h"

using namespace std;

meerkat::meerkat() {}

void meerkat::setName(string meerName){
    this->meerName = meerName;
}

string meerkat::getName(){
    return meerName;
}

void meerkat::setAge(int meerAge){
    this->meerAge = meerAge;
}

int meerkat::getAge(){
    return meerAge;
}