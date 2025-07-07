#include <stdio.h>
#include <string.h>
struct Address
    {
        int house_no;
        char city[40];
        int pincode;
    
    };
struct Student{
    char Name[50];
    struct Address location;
    
};
    int main(){
    struct Student s1={"alen",{1,"piravom",888}};
    printf("%s%d%s%d",s1.Name,s1.location.house_no,s1.location.city,s1.location.pincode);
}
