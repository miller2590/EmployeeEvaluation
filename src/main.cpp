#include "../include/Employee.h"
#include "../include/Manager.h"

int main() {

    Employee Claudia("Claudia", "Doe", 5, "HR", 40000);
    
    Employee Steve("Steve", "Miller", 7, "IT", 70000);

    Manager Ryan("Ryan", "Hardy", 4, "Finance", 85000, "Manager", "Finance");
    

    Claudia.printValues();
    Steve.printValues();
    Ryan.printValues();
    
    return 0;
}