#include <stdio.h>
void max(int arr[10]){
    int b=arr[0];
    for (int i=0;i<10;i++){
        if (arr[i]>b){
            b=arr[i];
        }
    }printf("Max value: %d",b);
}
int main(){
    int arr[10]={1,9,3,4,8,10,23,453,34,33};
    max(arr);
}