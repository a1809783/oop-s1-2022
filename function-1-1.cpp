#include <iostream>
#include <string>

using namespace std;

void copy_2d_strings(std::string first[][2], std::string second[][2], int n){

    for (int i = 0; i < n; i++){
        
        for (int x = 0; x < 2; x++)
        {
            second[i][x] = first[i][x];
        }
    }
}