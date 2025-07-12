#include<stdio.h>
int main(){
    //Remove even numbers
    int list[6]= {1,2,3,4,5,6};
    for (int i=0;i<6;i++){
        if (list[i]%2==1){
            printf("%d\n",list[i]);
        }
    }
}