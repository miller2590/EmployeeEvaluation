/*
 * @file Employee.cpp
 * Implementation of the Employee class.
 *
 * This file defines the methods and behaviors of the Employee class, which is a base class
 * for other employee-related classes. It includes the implementation of the constructor,
 * destructor, getter methods, and the printValues method to display the information of an employee.
 *
 * @author Gage Miller
 * 
 */

#include "../include/Employee.h"
#include <iostream>

using namespace std;

//Employee constructor
Employee::Employee(string firstName, string lastName, int efficiencyRating, string field, int salary) 
: firstName(firstName), lastName(lastName), field(field), salary(salary) {
    
    //Validates efficieny rating within range [1, 5].
    if (efficiencyRating >= 1 && efficiencyRating <= 5) {
        this->efficiencyRating = efficiencyRating;
    } else {
        //Displays error message in red (on most terminals) and sets default value of (1).
        cout << "\033[1;31m Error in {" << this->firstName << "}." << "\n";
        cout << "\033[1;31m Efficiency rating must be between 1 and 5.\033[0m \n";
        cout << "\033[1;31m You Enterd: " << efficiencyRating << "\033[0m \n";
        cout << "\033[1;31m Setting to default value (1). \033[0m \n";
        this->efficiencyRating = 1;
    }
};

//Destructor for the Employee class
Employee::~Employee(){};

//Employee getters
string Employee::getFirstName() const{
    return firstName;
}

string Employee::getLastName() const{
    return lastName;
}

int Employee::getEfficiencyRating() const{
    return efficiencyRating;
}

string Employee::getField() const{
    return field;
}

int Employee::getSalary() const{
    return salary;
}

//Base printValues method for all subclasses.
void Employee::printValues() const{
    cout << "First Name: " << getFirstName() << " Last Name: " << getLastName() << "\n";
    cout << "Efficiency Rating: " << getEfficiencyRating() << "\n";
    cout << "Field: " << getField() << "\n";
    cout << "Salary: $" << getSalary() << "\n";
}