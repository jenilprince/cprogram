#include<stdio.h>
#include<string.h>
struct student
{
    int roll_no;
    char name[50];
    float mark;
};

int main(){
    struct student s1;
    s1.roll_no=5;
    s1.mark=66.4;
    strcpy(s1.name,"alen");
    printf("%s",s1.name);
    
   

    
    

    return 0;   
}