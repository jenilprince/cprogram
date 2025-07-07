#include<stdio.h>
struct Marks
{
    int math;
    int science;
    int english;
};
struct ReportCard
{
    char student_name[30];
    int rollno;
    struct Marks marks;
};
int main(){
    struct ReportCard s1={"Anitha",45,{85,90,88}};
    printf("Name: %s\nRoll No.: %d\nMarks - Math: %d, Science: %d, English: %d",s1.student_name,s1.rollno,s1.marks.math,s1.marks.science,s1.marks.english);
}