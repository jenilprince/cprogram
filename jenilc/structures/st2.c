#include <stdio.h>
#include <string.h>
struct Employee 
{
    int empId;
    char name[50];
    float salary;
};
int main(){
    struct Employee e1;
    printf("%d,%s,%1.2f",e1.empId=2,strcpy(e1.name,"Name"),e1.salary=12.32);
}