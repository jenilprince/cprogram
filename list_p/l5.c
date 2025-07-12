#include<stdio.h>
int main(){
    //Find common elements in two lists
    int list1[4]={1,2,3,4};
    int list2[4]={3,4,5,6};
    for (int i=0;i<4;i++){
        for (int j=0;j<4;j++){
            if (list1[i]==list2[j]){
                printf("%d\n",list1[i]);
        }}
    }
}