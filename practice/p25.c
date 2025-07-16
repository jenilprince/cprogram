#include<stdio.h>
int main(){
    int list[5]={1,2,3,4,5},sum_odd,sum_even;
    for (int i=0;i<5;i++){
        if (list[i]%2==0){
            sum_even+=list[i];
        }
        else{
            sum_odd+=list[i];
        }
    }
    printf("%d",sum_even-sum_odd);
}