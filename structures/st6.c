#include<stdio.h>
#include <string.h>
struct Teacher
{
    int tid;
    char name[45];
    int salary;

};
int main(){
    struct Teacher t1;
    t1.tid=1;
    t1.salary=1000;
    strcpy(t1.name,"Name");
    printf("%d,%s,%d",t1.tid,t1.name,t1.salary=100000);
}