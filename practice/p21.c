#include<stdio.h>
int main(){
    char name[]="abcie";
    int count=0;
    for (int i=0;name[i]!='\0';i++){
        count++;
    }printf("Count: %d",count);
}