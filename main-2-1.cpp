#include <iostream>
#include <string>

using namespace std;

void print_sevens(int *nums, int length);

int main(){

    int old_array[3] = {7, 1, 7};
    
    int *nums = old_array;

    print_sevens(nums, 3);

    return 0;
}
