#include "../include/Employee.h"
#include <iostream>

using namespace std;

Employee::Employee(string firstName, string lastName, int efficiencyRating, string field, int salary) 
: firstName(firstName), lastName(lastName), field(field), salary(salary) {

    if (efficiencyRating >= 1 && efficiencyRating <= 5) {
        this->efficiencyRating = efficiencyRating;
    } else {
        cout << "\033[1;31m Error in {" << this->firstName << "}." << "\n";
        cout << "\033[1;31m Efficiency rating must be between 1 and 5.\033[0m \n";
        cout << "\033[1;31m You Enterd: " << efficiencyRating << "\033[0m \n";
        cout << "\033[1;31m Setting to default value (1). \033[0m \n";
        this->efficiencyRating = 1;
    }
};

Employee::~Employee(){};

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

void Employee::printValues() const{
    cout << "First Name: " << getFirstName() << " Last Name: " << getLastName() << "\n";
    cout << "Efficiency Rating: " << getEfficiencyRating() << "\n";
    cout << "Field: " << getField() << "\n";
    cout << "Salary: $" << getSalary() << "\n";
}