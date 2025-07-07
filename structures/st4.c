#include <stdio.h>
struct Student
{
    int id;
    int marks1;
    int marks2;
    int marks3;
};
int main(){
    struct Student s1;
    printf("Enter Mark1: ");
    scanf("%d",&s1.marks1);
    printf("Enter Mark2: ");
    scanf("%d",&s1.marks2);
    printf("Enter Mark3: ");
    scanf("%d",&s1.marks3);
    printf("Avg: %d",(s1.marks1+s1.marks2+s1.marks3)/3);
}