#include<stdio.h>
union u
{
   int age;
   float mark;
};
int main(){
    union u a;
    a.mark=47.54;
    a.age=14; 
    printf("%d",a.age);
    return 0;
}