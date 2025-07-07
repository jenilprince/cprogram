#include<stdio.h>
union u
{
   int age;
   float mark;
};

int main(){

    union u a;
    a.age=14;
    
    a.mark=55.5;
    
    printf("%f",a.mark);
    


    return 0;
}