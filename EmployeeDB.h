#ifndef EMPLOYEEDB_H
#define EMPLOYEEDB_H
#include <vector>
#include "Employee.h"

//Employee Database class
class EmployeeDB
{
    vector<Employee> empVec;
    
    public: 
    
    void addEmployee(string name, int age, float salary, bool hc, bool nri);
    void populateEmployeeDB();
    void displayAllEmployees();
    void filterEmployees(string filterParameter, string criteria);

    vector<Employee>::iterator getBeginIterator();
    vector<Employee>::iterator getEndIterator();
};
#endif