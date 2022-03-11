#include <iostream>
#include <string>

using namespace std;

void print_as_binary(string decimal_number){

    int decimalnumb = stoi(decimal_number);

    string binarynumb;

    while (decimalnumb > 0)
    {
        binarynumb = to_string(decimalnumb % 2) + binarynumb;

        decimalnumb = decimalnumb / 2;
    }

    cout << binarynumb << endl;
}
