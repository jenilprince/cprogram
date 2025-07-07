#include<stdio.h>
int main(){
    int array[5]={5,10,15,20,25};
    array[2]=100;
    for(int i=0;i<5;i++){
    printf("%d,",array[i]);
    }
}