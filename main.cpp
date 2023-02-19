#include "OperationsEmployeeDB.h"
#include<cstring>

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
        if(strcmp(argv[2],"name")==0){
            opsDB.filterByName(argv[3]);
        }
        else if(strcmp(argv[2],"HC")==0){
            opsDB.filterByHC(argv[3]);
        }
        else if(strcmp(argv[2],"NRI")==0){
            opsDB.filterByNRI(argv[3]);
        }
        else if(strcmp(argv[2], "age")==0){
            opsDB.filterByAge(argv[3], atoi(argv[5]));
        }
        else if(strcmp(argv[2], "salary")==0){
            opsDB.filterBySalary(argv[3], atof(argv[5]));
        }
    }
}