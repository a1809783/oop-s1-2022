#include <iostream>

extern int diagonal(int array[4][4]);

int main(){


int array[4][4]={
    {2,2,4,3},
    {2,4,5,6},
    {3,4,5,6},
    {1,2,5,6},

};
int sum = diagonal(array);

std::cout<<sum<<std::endl;
return 0;

}