#ifndef OPERATIONSEMPLOYEEDB_H
#define OPERATIONSEMPLOYEEDB_H
#include "EmployeeDB.h"
#include <algorithm>

//Operations class
class OperationsEmployeeDB{
    EmployeeDB empDB;

    public: 
    OperationsEmployeeDB(EmployeeDB db) : empDB(db){}

    //sort operations
    void sortEmpDB(string parameter, string order){
        if(parameter=="name"){
            if(order=="ASC"){
                sort(empDB.getBeginIterator(), empDB.getEndIterator(), sortNameAsc);
            }
            else if(order=="DESC"){
                sort(empDB.getBeginIterator(), empDB.getEndIterator(), sortNameDesc);
            }
        }
        else if(parameter=="age"){
            if(order=="ASC"){
                sort(empDB.getBeginIterator(), empDB.getEndIterator(), sortAgeAsc);
            }
            else if(order=="DESC"){
                sort(empDB.getBeginIterator(), empDB.getEndIterator(), sortAgeDesc);
            }
        }
        else if(parameter=="salary")
        {
            if(order=="ASC"){
                sort(empDB.getBeginIterator(), empDB.getEndIterator(), sortSalaryAsc);
            }
            else if(order=="DESC"){
                sort(empDB.getBeginIterator(), empDB.getEndIterator(), sortSalaryDesc);
            }
        }
        else if(parameter=="HC")
        {
            if(order=="ASC"){
                sort(empDB.getBeginIterator(), empDB.getEndIterator(), sortHCAsc);
            }
            else if(order=="DESC"){
                sort(empDB.getBeginIterator(), empDB.getEndIterator(), sortHCDesc);
            }
        }
        else if(parameter=="NRI")
        {
            if(order=="ASC"){
                sort(empDB.getBeginIterator(), empDB.getEndIterator(), sortNRIAsc);
            }
            else if(order=="DESC"){
                sort(empDB.getBeginIterator(), empDB.getEndIterator(), sortNRIDesc);
            }
        }

        empDB.displayEmployees();
    }

    //filter operations
    void filterByName(string substr)
    {
        empDB.filterByName(substr);
    }

    void filterByHC(bool torf)
    {
        empDB.filterByHC(torf);
    }

    void filterByNRI(bool torf)
    {
        empDB.filterByNRI(torf);
    }

    void filterByAge(string rel, int age)
    {
        empDB.filterByAge(rel, age);
    }

    void filterBySalary(string rel, float salary)
    {
        empDB.filterBySalary(rel, salary);
    }

    //static comparator functions for sort method defined below
    static bool sortNameAsc(Employee &emp1, Employee &emp2){
        return emp1.getName() < emp2.getName();
    }
    static bool sortNameDesc(Employee &emp1, Employee &emp2){
        return emp1.getName() > emp2.getName();
    }
    static bool sortAgeAsc(Employee &emp1, Employee &emp2){
        return emp1.getAge() < emp2.getAge();
    }
    static bool sortAgeDesc(Employee &emp1, Employee &emp2){
        return emp1.getAge() > emp2.getAge();
    }
    static bool sortSalaryAsc(Employee &emp1, Employee &emp2){
        return emp1.getSalary() < emp2.getSalary();
    }
    static bool sortSalaryDesc(Employee &emp1, Employee &emp2){
        return emp1.getSalary() > emp2.getSalary();
    }
    static bool sortHCAsc(Employee &emp1, Employee &emp2){
        return emp1.getHC() < emp2.getHC();
    }
    static bool sortHCDesc(Employee &emp1, Employee &emp2){
        return emp1.getHC() > emp2.getHC();
    }
    static bool sortNRIAsc(Employee &emp1, Employee &emp2){
        return emp1.getNRI() < emp2.getNRI();
    }
    static bool sortNRIDesc(Employee &emp1, Employee &emp2){
        return emp1.getNRI() > emp2.getNRI();
    }
};

#endif