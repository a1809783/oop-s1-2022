#include <iostream>

void print_summed_matrices(int array1[3][3], int array2[3][3]){

int finalnum=0;

    for (int i = 0; i < 3; i++){

        for (int j = 0; j < 3; j++){

            finalnum=array1[i][j] + array2[i][j];
            std::cout << finalnum;

            if (j != 2)
            {
                std::cout << " ";
            }
        }
        
        std::cout << std::endl;
    }
}
