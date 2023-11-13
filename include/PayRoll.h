/*
 * @file PayRoll.h
 * Declaration of the PayRoll class.
 *
 * This file declares the PayRoll class, which is responsible for managing and displaying
 * payroll information for multiple employees. It contains a vector of pairs to store names
 * and salaries and a template method printPayRoll to print the sorted payroll information.
 * The sorting is done based on the salary in ascending order. This class utilizes C++ templates
 * to handle various types of objects with the required methods.
 *
 * @note There is no separate .cpp file for this class as it is a template class, and its
 * implementation is provided in the header file. Templates are typically defined in header files
 * to allow the compiler to generate code for different data types at compile time.
 *
 * @author Gage Miller
 * 
 */

#ifndef PAYROLL_H
#define PAYROLL_H

#include <utility>
#include <vector>
#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

class PayRoll {
private:
    vector<pair<string, int>> salaryData;

public:
    //Template method to print payroll infromation for multiple employees.
    template <typename... Types>
    void printPayRoll(const Types&... objects) {
        //Emplaces names and salries into the salaryData vector.
        (salaryData.emplace_back(objects.getFirstName(), objects.getSalary()), ...);

        //Comparator lambda function to sort by salary in ascending order.
        auto compareBySalaryAsc = [](const auto& a, const auto& b) {
            return a.second < b.second;
        };

        //Sort salaryData vector based on the comparator.
        sort(salaryData.begin(), salaryData.end(), compareBySalaryAsc);

        //Print the sorted payroll information.
        for (const auto& employee : salaryData) {
            cout << "Name: " << employee.first << ", Salary: " << employee.second << endl;
        }
    }
};

#endif