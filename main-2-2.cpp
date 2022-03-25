#include <iostream>
#include <string>

using namespace std;

int maximum_sum(int *nums, int length);

int main(){


    int old_array[5] = {-12, 3, -6, 10,-5};
    int *nums = old_array;

    maximum_sum(nums, 5);

    return 0;
}
