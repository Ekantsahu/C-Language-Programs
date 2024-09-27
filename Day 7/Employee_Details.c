#include <stdio.h>
int main(){
    char name[30] ;
    int EmployeeId ;
    char emp_Designation[50] ;
    float salary ;

    printf("Enter the details :\n ");
    scanf("%s %d %s %f",&name,&EmployeeId,&emp_Designation,&salary);

    printf("Employee details \n");
    printf("Name : %s\n",name);
    printf("Employee ID : %d\n",EmployeeId);
    printf("Designation : %s\n",emp_Designation);
    printf("Salary : $%.2f\n",salary);

     return 0;

}