#include<stdio.h>
//Maximum in an array
void max(int arr[4]){
    int maxel=arr[0];
    for (int i=0;i<4;i++){
        if (arr[i]>maxel){
            maxel=arr[i];
        }
    }
    printf("%d",maxel);
}
int main(){
    int list[5]={1,2,3,6,5};
    max(list);
    
}