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
    template <typename... Types>
    void printPayRoll(const Types&... objects) {
        (salaryData.emplace_back(objects.getFirstName(), objects.getSalary()), ...);

        auto compareBySalaryAsc = [](const auto& a, const auto& b) {
            return a.second < b.second;
        };

        sort(salaryData.begin(), salaryData.end(), compareBySalaryAsc);

        for (const auto& employee : salaryData) {
            cout << "Name: " << employee.first << ", Salary: " << employee.second << endl;
        }
    }
};

#endif