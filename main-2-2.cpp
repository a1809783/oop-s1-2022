#include <iostream>
#include <string>

using namespace std;

extern int binary_to_number(int binary_digits[], int number_of_digits);

int main(){

    int binarynumb[] = {1, 0, 1, 0, 0, 1};

    binary_to_number(binarynumb, 6);

    return 0;
}
