#include<stdio.h>
#include<string.h>

    struct Employee_data
    {
        int employee_number;
        char name[25];
        float salary;
        int years_service;  
    };
int main(){
    struct Employee_data s1;

    s1.employee_number = 4672;
    strcpy(s1.name, "Ali Abu Bakar");
    s1.salary = 4550.00;
    s1.years_service = 8;

    printf("Employee number : %d\n", s1.employee_number );
    printf("Name : %s\n",s1.name);
    printf("Salary : %f\n",s1.salary);
    printf("Years Serviced : %d\n",s1.years_service);
    
}