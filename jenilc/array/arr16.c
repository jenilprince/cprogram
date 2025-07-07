#include<stdio.h>
#include<string.h>
int main(){
    char name[]="My Name";
    char copy[100];
    strcpy(copy,name);
    printf("%s",copy);
}
/*char name[]="alen";
    char name2[]="alen";
    int result=strcmp(name,name2);
    printf("%d",result);*/