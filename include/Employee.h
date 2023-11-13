/*
 * @file Employee.h
 * Declaration of the Employee class.
 *
 * This file declares the Employee class, which serves as the base class for
 * other employee-related classes. It includes attributes such as first name,
 * last name, efficiency rating, field, and salary. The class provides virtual
 * functions for accessing and printing these attributes, which can be overridden
 * by derived classes. The Employee class follows principles of object-oriented
 * programming and encapsulation.
 *
 * @author Gage Miller
 * 
 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

using namespace std;

class Employee{
    protected:
        string firstName;
        string lastName;
        int efficiencyRating;
        string field;
        int salary;
    
    public:

        //Constructor for Employee
        Employee(string firstName, string lastName, int efficiencyRating, string field, int salary);

        //Virtual destructor for polymorphic behavior
        virtual ~Employee();

        //Virtual getter functions
        virtual string getFirstName() const;
        virtual string getLastName() const;
        virtual int getEfficiencyRating() const;
        virtual string getField() const;
        virtual int getSalary() const;

        //Virtual print funtion to print attributes
        virtual void printValues() const;

};

#endif