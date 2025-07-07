#include <stdio.h>
void max(int arr[5]){
    int b=arr[0];
    for (int i=0;i<5;i++){
        if (arr[i]>b){
            b=arr[i];
        }
    }printf("Max value: %d",b);
}
int main(){
    int arr[5]={1,2,3,4,8};
    max(arr);
}


