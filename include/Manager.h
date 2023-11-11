#ifndef MANAGER_H
#define MANAGER_H

#include "Employee.h"

class Manager : public Employee {
    protected:
        string title;
        string department;
    
    public:
        Manager(string firsName, string lastName, int efficiencyRating, string field, int salary, string title, string department);

        virtual int getSalary() const override;
        virtual int getEfficiencyRating() const override;
        virtual void printValues() const override;

        virtual string getTitle() const;
        virtual string getDepartment() const;
        
};

#endif