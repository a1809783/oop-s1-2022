#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool is_a_palindrome(int integers[], int length){
    bool judgement  = true;

    for (int i = 0; i < length / 2; i++){
        if (integers[i] != integers[length - 1 - i])
        
        {

            judgement = false;

        }
    }

    return judgement;
}

int sum_elements(int integers[], int length){
    int sum = 0;

    for (int i = 0; i < length; i++)
    {

        sum += integers[i];
    }

    return sum;
}

int sum_if_a_palindrome(int integers[], int length){

    if (length < 1){
        return -1;

    }

    int judgement = is_a_palindrome(integers, length);

    if (!judgement){
        return -2;
    }
    else{
        return sum_elements(integers, length);
    }
}
