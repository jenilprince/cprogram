#include<stdio.h>
int main(){
    //Second largest number
    int list[6]={8,2,4,6,1,3};
    int min = list[0];
    for (int i=0;i<6;i++){
        if (list[i]<min){
            min=list[i];
        }
    }
    int second=list[0];
    for (int j=0;j<6;j++){
        if (list[j]>min && list[j]<second){
            second=list[j];
        }
        
    }printf("%d\n",second);
    
}