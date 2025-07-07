#include <stdio.h>
#include<string.h>
struct Address
{
    int house_no;
    char city[60];
    int pincode;
};
struct Student
{
    char name[90];
    struct Address loc;
};
int main(){
    struct Student std1={"Name",{1,"City",682901}};
    printf("%s,%d,%s,%d",std1.name,std1.loc.house_no,std1.loc.city,std1.loc.pincode);
}