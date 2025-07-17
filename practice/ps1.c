#include<stdio.h>
#include<string.h>
struct Student{
    int roll;
    char name[100];
    int score;
};

int main(){
    struct Student s1[3];
    for (int i=0;i<3;i++){
    printf("Enter roll number: ");
    scanf("%d",&s1[i].roll);
    printf("Enter name: ");
    scanf("%s",s1[i].name);
    printf("Enter score: ");
    scanf("%d",&s1[i].score);}

for (int i=0;i<3;i++){
printf("Roll no. %d\nName: %s\nScore: %d",s1[i].roll,s1[i].name,s1[i].score);
}
}