#include <iostream>

extern void count_numbers(int array[4][4]);

int main(){
    int array[4][4] = {
        {2,2,4,3},
        {2,4,5,6},
        {3,4,5,6},
        {1,2,5,6},
    };

    count_numbers(array);

    return 0;
}
