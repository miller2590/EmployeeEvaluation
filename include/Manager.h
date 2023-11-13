/*
 * @file Manager.h
 * Declaration of the Manager class.
 *
 * This file declares the Manager class, which is derived from the Employee class.
 * It includes additional attributes for the manager, such as title and department.
 * The class provides implementations for overridden virtual functions from the base class,
 * including getSalary, getEfficiencyRating, and printValues. The Manager class extends the
 * functionality of the Employee class to include specific details for a managerial role.
 *
 * @author Gage Miller
 * 
 */

#ifndef MANAGER_H
#define MANAGER_H

#include "Employee.h"

class Manager : public Employee {
    protected:
        string title;
        string department;
    
    public:
        //Constructor for Manager
        Manager(string firsName, string lastName, int efficiencyRating, string field, int salary, string title, string department);

        //Overridden funtions of base class.
        virtual int getSalary() const override;
        virtual int getEfficiencyRating() const override;
        virtual void printValues() const override;

        //Getters for additions Manager attributes.
        virtual string getTitle() const;
        virtual string getDepartment() const;
        
};

#endif