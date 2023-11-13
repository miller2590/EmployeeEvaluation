# Employee Management System

This C++ program demonstrates an Employee Management System using object-oriented programming principles. The system includes classes for `Employee`, `Manager`, and `PayRoll`, showcasing inheritance, polymorphism, and encapsulation.

# Table of Contents

1. [Employee Management System](#employee-management-system)
   - 1.1 [Usage](#usage)
   - 1.2 [Code Structure](#code-structure)
   - 1.3 [Test Data](#test-data)
      - 1.3.1 [Employee Information](#employee-information)
      - 1.3.2 [Expected Output](#expected-output)
   - 1.4 [What I Learned](#what-i-learned)
      - 1.4.1 [Overview](#overview)
      - 1.4.2 [Object-Oriented Programming (OOP)](#object-oriented-programming-oop)
      - 1.4.3 [Templates and Variadic Templates](#templates-and-variadic-templates)
      - 1.4.4 [Smart Pointers](#smart-pointers)
      - 1.4.5 [Sorting and Algorithms](#sorting-and-algorithms)
      - 1.4.6 [File Structure and Organization](#file-structure-and-organization)
      - 1.4.7 [Error Handling](#error-handling)
      - 1.4.8 [Markdown Documentation](#markdown-documentation)
      - 1.4.9 [Collaboration and Contribution](#collaboration-and-contribution)
      - 1.4.10 [Conclusion](#conclusion)



## Usage

To use this program, follow these steps:

1. **Clone the repository:**

    ```bash
    git clone [repository_url]
    ```

2. **Compile the code:**

    ```bash
    g++ -o main.exe ./src/*.cpp -I./include
    ```
3. **Run the executable:**
    ```bash
    ./main.exe
    ```

# Code Structure

- **Employee.h**: Declaration of the base Employee class.
- **Employee.cpp**: Implementation of the Employee class.
- **Manager.h**: Declaration of the derived Manager class.
- **Manager.cpp**: Implementation of the Manager class.
- **PayRoll.h**: Declaration of the PayRoll class.
- **PayRoll.cpp**: Implementation of the PayRoll class.
- **main.cpp**: Main program file demonstrating the use of the classes.

# Test Data

## Employee Information

| Name   | Last Name | Efficiency Rating | Field   | Salary |
|--------|-----------|---------------------|---------|--------|
| Claudia | Doe       | 5                   | HR      | 40000  |
| Steve   | Miller    | 7                   | IT      | 70000  |
| Ryan    | Hardy     | 4                   | Finance | 85000  |

## Expected Output

### Print Function Direct from Object:

```plaintext
Error in {Steve}.
Efficiency rating must be between 1 and 5.
You Enterd: 7
Setting to default value (1).

First Name: Claudia Last Name: Doe
Efficiency Rating: 5
Field: HR
Salary: $40000

First Name: Steve Last Name: Miller
Efficiency Rating: 1
Field: IT
Salary: $70000

First Name: Ryan Last Name: Hardy
Efficiency Rating: 4
Field: Finance
Salary: $85000
Title: Manager
Department: Finance
```
### PayRoll Information (Shared Pointer):
```plaintext
Name: Claudia, Salary: 40000
Name: Steve, Salary: 70000
Name: Ryan, Salary: 85000
```

# What I Learned

## Overview
This project provided an opportunity to practice and demonstrate several key concepts in C++ programming and object-oriented design.

## Object-Oriented Programming (OOP)
- **Inheritance:** Understanding and implementing class inheritance, where a derived class inherits properties and behaviors from a base class.
- **Polymorphism:** Utilizing polymorphism to create functions that can accept objects of different classes through pointers or references to base classes.

## Templates and Variadic Templates
- **Template Functions:** Creating template functions to handle different types without duplicating code.
- **Variadic Templates:** Implementing variadic templates to handle a variable number of function arguments, as demonstrated in the `printPayRoll` function.

## Smart Pointers
- **Shared Pointers:** Using `std::shared_ptr` to manage memory and ensure proper object ownership in the case of the `PayRoll` class.

## Sorting and Algorithms
- **Sorting Vectors:** Employing the `std::sort` algorithm to sort vectors of pairs based on specific criteria, such as salary in the `printPayRoll` function.

## File Structure and Organization
- **Project Organization:** Structuring the project with separate header and implementation files for better code organization and maintainability.

## Error Handling
- **Efficiency Rating Validation:** Implementing basic error handling for validating the efficiency rating input in the `Employee` constructor.

## Markdown Documentation
- **Markdown Documentation:** Creating clear and concise documentation using Markdown for better readability and understanding of the code structure, usage, and test data.

## Collaboration and Contribution
- **Git Workflow:** Understanding and following a basic Git workflow, including cloning, branching, making changes, and submitting pull requests.

## Conclusion
This project provided a practical and hands-on learning experience, reinforcing fundamental concepts in C++ and contributing to a better understanding of software development practices.
