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

        Employee(string firstName, string lastName, int efficiencyRating, string field, int salary);
        virtual ~Employee();
        virtual string getFirstName() const;
        virtual string getLastName() const;
        virtual int getEfficiencyRating() const;
        virtual string getField() const;
        virtual int getSalary() const;

        virtual void printValues() const;

};

#endif