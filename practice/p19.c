#include <stdio.h>
int main(){
    int arr[13]={1,2,3,4,5,6,5,7,6794,64,56,45,456};
    for (int i=0;i<13;i++){
        if(arr[i]%2==0){
            printf("%d\n",arr[i]);
        }
    }
}