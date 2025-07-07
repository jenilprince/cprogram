#include<stdio.h>
#include<string.h>
int main(){
    char name[50];
    char name2[34];
    printf("Enter char: ");
    scanf("%s",name);
    printf("Enter char: ");
    scanf("%s",name2);
    strcat(name," ");
    strcat(name, name2);
    printf("%s",name);
}