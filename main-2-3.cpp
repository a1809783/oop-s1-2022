#include <iostream>
#include <string>

using namespace std;

extern int sum_if_a_palindrome(int integers[], int length);

int main(){
    int array[]={-1,2,4,4,2,-1};

    int result=sum_if_a_palindrome(array, 6);

    cout << result << endl;

    return 0;
}
