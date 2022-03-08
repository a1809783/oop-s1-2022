#include<iostream>
using namespace std;
int main(){

    int num=21;
    int length=0;
    int n[20];

    while(num/2){

        n[length]= num%2;
        length++;
        num=num/2;


    }

    n[length]=num;
    length++;
    cout<<"base 2:";
    
    for (int i=length-1; i>=0;i--){

        cout<< n[i];

    }

    return 0;

}