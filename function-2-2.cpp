#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int binary_to_number(int binary_digits[], int number_of_digits){

    int decimalnumb = 0;

    int power = 0;
    
    for (int i = number_of_digits - 1; i > -1; i--){

        decimalnumb += binary_digits[i] * pow(2, power);

        power++;

    }

    return decimalnumb;
}
