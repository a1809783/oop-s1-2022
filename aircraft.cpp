#include <iostream>
#include <string>

#include "cart.h"

using namespace std;

cart::cart(){
    cats = new meerkat[4];
    amount = 0;
}
bool cart::addMeerkat(meerkat cat){
    if (amount > 3){
        return false;
    }
    else{
        cats[amount] = cat;
        amount++;
        return true;
    }
}

void cart::emptyCart(){
    delete[] cats;
    cats = new meerkat[4];
    amount = 0;
}

void cart::printMeerkats(){
    for (size_t i = 0; i < amount; i++){
        cout << cats[i].getName() << ' ' << cats[i].getAge() << endl;
    }
}