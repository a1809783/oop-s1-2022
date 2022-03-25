#include <iostream>
#include <string>

using namespace std;

void cpyia(int old_array[], int new_array[], int length);

int main()
{

    int old_array[3] = {1, 2, 3};
    int new_array[3];

    cpyia(old_array, new_array, 3);

    return 0;
}
