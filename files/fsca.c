#include<stdio.h>
int main(){
    char name[100];
    FILE *file2=fopen("f2.txt","r");
    while((fgets(name,100,file2)!=NULL)){
        printf("%s",name);
        fscanf(file2,"%s",name);
        printf("%s",name);
    }
    fclose(file2);
}