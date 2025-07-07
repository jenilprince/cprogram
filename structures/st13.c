#include <stdio.h>
struct Time
{
    int hour;
    int minute;
    int second;
};
struct Flight
{
    char flight_no[30];
    float dept_time;
    struct Time time;
};
int main(){
    struct Flight f1={"AI202",2.30,{2,30,40}};
    printf("Flight No: %s\nDeparture Time: %d:%d:%d",f1.flight_no,f1.time.hour,f1.time.minute,f1.time.second);
}