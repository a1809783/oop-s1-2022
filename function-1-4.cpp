#include <iostream>

void print_scaled_matrix(int array[3][3], int scale){

    int finalnum=0;
    for (int i=0; i<3; i++){

        for (int j=0; j<3; j++)
        {
            finalnum=array[i][j]*scale;
            std::cout << finalnum;

            if (j!= 2)
            {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
}
