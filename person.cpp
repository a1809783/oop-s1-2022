#include <iostream>
#include <string>
#include "person.h"

using namespace std;

person::person(string myName, int Salary){
    this->name = myName;
    this->salary = Salary;
}

void person::setName(string myName){
    this->name = myName;
}

string person::getName(){
    return name;
}

void person::setSalary(int mySalary){
    this->salary = mySalary;
}

int person::getSalary(){
    return salary;
}