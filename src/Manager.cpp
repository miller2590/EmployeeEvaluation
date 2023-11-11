#include "../include/Manager.h"
#include <iostream>

using namespace std;

Manager::Manager(string firstName, string lastName, int efficiencyRating, string field, int salary, string title, string department)
: Employee(firstName, lastName, efficiencyRating, field, salary), title(title), department(department) {};

int Manager::getSalary() const{
    return salary;
}

int Manager::getEfficiencyRating() const{
    return efficiencyRating;
}

string Manager::getTitle() const{
    return title;
}

string Manager::getDepartment() const{
    return department;
}

void Manager::printValues() const{
    Employee::printValues();
    cout << "Title: " << getTitle() << "\n";
    cout << "Department: " << getDepartment() << "\n";
}