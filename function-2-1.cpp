#include <iostream>
#include <string>

using namespace std;

void print_sevens(int *nums, int length){

    for (size_t i = 0; i < length; i++){

        if (*(nums + i) % 7 == 0){

            cout << *(nums + i) << endl;
            
        }
    }
}