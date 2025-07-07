#include <stdio.h>
int main(){
//check leap year
int year=2021;
if (year%4==0 && year%100!=0){
    printf("Leap");
}
else{
    printf("Not Leap");
}
}