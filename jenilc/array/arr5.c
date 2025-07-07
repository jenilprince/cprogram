#include<stdio.h>
int main(){
    int array[6]={1,2,3,4,6,5};
    int max=array[0];
    for (int i=0;i<6;i++){
        //printf("%d",array[i]);
        if (array[i]>max){
            max=array[i];
        }
    }
    printf("%d",max);
}

