#include <iostream>
#include <string>

using namespace std;

void copy_2d_strings(std::string first[][2], std::string second[][2], int n);

int main(){

    string first[3][2] = {{"1", "2"}, {"3", "4"}, {"5", "6"}};
    string second[3][2];

    copy_2d_strings(first, second, 3);
    return 0;
}
