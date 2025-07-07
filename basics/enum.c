#include<stdio.h>

enum Date{monday,tuesday,wednesday,thursday,friday};

int main(){
    enum Date today=friday;
    printf("%d\n",today);
    switch (today)
    {
    case monday:
        printf("monday");
        break;
    case tuesday:
        printf("tuesday");
        break;
    case wednesday:
        printf("wednesday");
        break;
    case thursday:
        printf("thursday");
        break;
    case friday:
        printf("friday");
        break;
    
    default:
        break;
    }
    return 0;
}