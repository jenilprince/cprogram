#include<stdio.h>
int main(){
    //Find all elements greater than average
    int list[6]={1,2,3,4,5,6};
    int sum=0;
    for (int i=0;i<6;i++){
        sum+=list[i];
    }printf("Average: %d\n",sum/6);
    for (int i=0;i<6;i++){
        if (list[i]>sum/6){
            printf("%d\n",list[i]);
        }
    }
}