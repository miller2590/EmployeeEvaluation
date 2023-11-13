/*
 * @file main.cpp
 * Main program for the Payroll System.
 *
 * This file serves as the main entry point for a C++ program that demonstrates a simple
 * payroll system using the Employee, Manager, and PayRoll classes. It creates instances
 * of Employee and Manager, prints their information, and manages payroll through the PayRoll class.
 * The program showcases object-oriented programming (OOP) concepts such as class inheritance,
 * constructor overloading, smart pointers and variadic templates.
 *
 * @author Gage Miller
 */

#include "../include/Employee.h"
#include "../include/Manager.h"
#include "../include/PayRoll.h"
#include <memory>

using namespace std;



int main() {
    //Create instance of Employee and Manager
    Employee Claudia("Claudia", "Doe", 5, "HR", 40000);
    
    Employee Steve("Steve", "Miller", 7, "IT", 70000);

    Manager Ryan("Ryan", "Hardy", 4, "Finance", 85000, "Manager", "Finance");

    //Print function direct from object
    Claudia.printValues();
    Steve.printValues();
    Ryan.printValues();

    //Shared pointer for PayRoll class
    auto currentPayRoll = make_shared<PayRoll>();

    /*
    * Variadic method to print payroll information. Can accept any
    * ammount of variables.
    */
    currentPayRoll->printPayRoll(Claudia, Steve, Ryan);
    
    return 0;
}