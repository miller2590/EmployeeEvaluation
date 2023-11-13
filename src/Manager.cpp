/*
 * @file Manager.cpp
 * Implementation of the Manager class.
 *
 * This file defines the methods and behaviors of the Manager class, which is a subclass
 * of the Employee class. It includes the implementation of the constructor, getter methods,
 * and the printValues method to display the information of a manager.
 *
 * @author Gage Miller
 * 
 */

#include "../include/Manager.h"
#include <iostream>

using namespace std;

//Manager constructor. Manager is a subclass of Employee
Manager::Manager(string firstName, string lastName, int efficiencyRating, string field, int salary, string title, string department)
: Employee(firstName, lastName, efficiencyRating, field, salary), title(title), department(department) {};

//Getters for Manager Class
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

/*
* Print value method that calls same method from base class,
* and adds two more strings to the output.
*/
void Manager::printValues() const{
    Employee::printValues();
    cout << "Title: " << getTitle() << "\n";
    cout << "Department: " << getDepartment() << "\n";
    cout << "\n";
}