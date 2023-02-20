#include "OperationsEmployeeDB.h"
#include <algorithm>
#include <iostream>
using namespace std;

OperationsEmployeeDB::OperationsEmployeeDB(EmployeeDB db) : empDB(db){}

void OperationsEmployeeDB::sortEmpDB(string sortParameter, string order){
    if(sortParameter=="name"){
        if(order=="ASC"){
            sort(empDB.getBeginIterator(), empDB.getEndIterator(), sortNameAsc);
        }
        else if(order=="DESC"){
            sort(empDB.getBeginIterator(), empDB.getEndIterator(), sortNameDesc);
        }
    }
    else if(sortParameter=="age"){
        if(order=="ASC"){
            sort(empDB.getBeginIterator(), empDB.getEndIterator(), sortAgeAsc);
        }
        else if(order=="DESC"){
            sort(empDB.getBeginIterator(), empDB.getEndIterator(), sortAgeDesc);
        }
    }
    else if(sortParameter=="salary")
    {
        if(order=="ASC"){
            sort(empDB.getBeginIterator(), empDB.getEndIterator(), sortSalaryAsc);
        }
        else if(order=="DESC"){
            sort(empDB.getBeginIterator(), empDB.getEndIterator(), sortSalaryDesc);
        }
    }
    else if(sortParameter=="HC")
    {
        if(order=="ASC"){
            sort(empDB.getBeginIterator(), empDB.getEndIterator(), sortHCAsc);
        }
        else if(order=="DESC"){
            sort(empDB.getBeginIterator(), empDB.getEndIterator(), sortHCDesc);
        }
    }
    else if(sortParameter=="NRI")
    {
        if(order=="ASC"){
            sort(empDB.getBeginIterator(), empDB.getEndIterator(), sortNRIAsc);
        }
        else if(order=="DESC"){
            sort(empDB.getBeginIterator(), empDB.getEndIterator(), sortNRIDesc);
        }
    }
    empDB.displayAllEmployees();
}

void OperationsEmployeeDB::filterEmployees(string filterParameter, string criteria)
{
    empDB.filterEmployees(filterParameter, criteria);
}

bool OperationsEmployeeDB::sortNameAsc(Employee &emp1, Employee &emp2){
    return emp1.getName() < emp2.getName();
}
bool OperationsEmployeeDB::sortNameDesc(Employee &emp1, Employee &emp2){
    return emp1.getName() > emp2.getName();
}
bool OperationsEmployeeDB::sortAgeAsc(Employee &emp1, Employee &emp2){
    return emp1.getAge() < emp2.getAge();
}
bool OperationsEmployeeDB::sortAgeDesc(Employee &emp1, Employee &emp2){
    return emp1.getAge() > emp2.getAge();
}
bool OperationsEmployeeDB::sortSalaryAsc(Employee &emp1, Employee &emp2){
    return emp1.getSalary() < emp2.getSalary();
}
bool OperationsEmployeeDB::sortSalaryDesc(Employee &emp1, Employee &emp2){
    return emp1.getSalary() > emp2.getSalary();
}
bool OperationsEmployeeDB::sortHCAsc(Employee &emp1, Employee &emp2){
    return emp1.isHC() < emp2.isHC();
}
bool OperationsEmployeeDB::sortHCDesc(Employee &emp1, Employee &emp2){
    return emp1.isHC() > emp2.isHC();
}
bool OperationsEmployeeDB::sortNRIAsc(Employee &emp1, Employee &emp2){
    return emp1.isNRI() < emp2.isNRI();
}
bool OperationsEmployeeDB::sortNRIDesc(Employee &emp1, Employee &emp2){
    return emp1.isNRI() > emp2.isNRI();
}