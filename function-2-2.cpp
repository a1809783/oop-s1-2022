#include <iostream>
#include <string>

using namespace std;

int maximum_sum(int *nums, int length){

    int max = 0;

    for (int i = 0; i < length; i++){

        int sum = 0;

        for (int j= 0; j < length; j++){

            sum = sum + nums[j];

            max = sum > max ? sum : max;
        }

        }
        cout << max << endl;

    return max;
}