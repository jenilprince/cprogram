#include<stdio.h>
int main(){
    int start=1,stop;
    printf("Enter number: ");
    scanf("%d",&stop);
    while (start<=stop){
        int tab=1;
        while(tab<=10){
            printf("%d * %d == %d\n", start,tab,start*tab);
            tab+=1;
            }    
        start+=1;
    }
}