#include <iostream>
#include <string>

#include "meerkat.h"
int main(int argc, char const *argv[]){

    meerkat finalmeerkat = meerkat();
    finalmeerkat.setName("Jack");
    finalmeerkat.setAge(18);

    cout << finalmeerkat.getName() << finalmeerkat.getAge() << endl;
    return 0;
}
