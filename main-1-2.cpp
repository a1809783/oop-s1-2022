#include <iostream>
#include <string>
#include "person.h"

int main(int argc, char const *argv[]){
    person person0 = person("james", 123);
    cout << person0.getName() << person0.getSalary() << endl;
    return 0;
}
