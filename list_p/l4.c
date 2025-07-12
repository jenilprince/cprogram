#include<stdio.h>
int main(){
    //Find all duplicates in a list
    int list[7]={1,2,4,2,4,5,1};
    int count=0;
    int list2[10];
    for (int i=0;i<7;i++){
        for (int j=i+1;j<7;j++){
            if (list[i]==list[j]){
                printf("%d\n",list[i]);

            }
        }
    }
}