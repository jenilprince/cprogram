#include<stdio.h>
int main(){
    int arr[6]={1,3,4,6,7,9};
    for (int i=0;i<6;i++){
        
        if (arr[i]%2==1){
            arr[i]=0;
            
        }
    printf("%d\t",arr[i]);
    }

}