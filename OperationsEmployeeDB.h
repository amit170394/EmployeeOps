#ifndef OPERATIONSEMPLOYEEDB_H
#define OPERATIONSEMPLOYEEDB_H
#include "EmployeeDB.h"

//Operations class
class OperationsEmployeeDB{
    EmployeeDB empDB;

    public: 
    OperationsEmployeeDB(EmployeeDB db);

    //sort operations
    void sortEmpDB(string sortParameter, string order);

    //filter operations
    void filterEmployees(string filterParameter, string criteria);

    //static comparator functions for sort method defined below
    static bool sortNameAsc(Employee &emp1, Employee &emp2);
    static bool sortNameDesc(Employee &emp1, Employee &emp2);
    static bool sortAgeAsc(Employee &emp1, Employee &emp2);
    static bool sortAgeDesc(Employee &emp1, Employee &emp2);
    static bool sortSalaryAsc(Employee &emp1, Employee &emp2);
    static bool sortSalaryDesc(Employee &emp1, Employee &emp2);
    static bool sortHCAsc(Employee &emp1, Employee &emp2);
    static bool sortHCDesc(Employee &emp1, Employee &emp2);
    static bool sortNRIAsc(Employee &emp1, Employee &emp2);
    static bool sortNRIDesc(Employee &emp1, Employee &emp2);
};

#endif