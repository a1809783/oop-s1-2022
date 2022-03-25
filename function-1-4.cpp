#include <iostream>
#include <string>

using namespace std;

void cpyda(double *old_array, double *new_array, int length){

    for (size_t i = 0; i < length; i++){
        
        new_array[i] = old_array[i];
    }
}