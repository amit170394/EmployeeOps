#include "OperationsEmployeeDB.h"
#include <cstring>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    EmployeeDB empDB;
    empDB.populateEmployeeDB();

    OperationsEmployeeDB opsDB(empDB);
    
    if(argc <4){
        cout << "Wrong umber of arguments";
        return 0;
    }
 
    if(strcmp(argv[1], "sort")==0){
        opsDB.sortEmpDB(argv[2], argv[3]);
    }
    else if(strcmp(argv[1],"filter")==0)
    {
        if(strcmp(argv[2],"name")==0 || strcmp(argv[2],"HC")==0 || strcmp(argv[2],"NRI")==0){
            opsDB.filterEmployees(argv[2], argv[3]);
        }
        else if(strcmp(argv[2], "age")==0 || strcmp(argv[2], "salary")==0){

            opsDB.filterEmployees(argv[2], string(argv[3])+" "+string(argv[5]));
        }
    }
}