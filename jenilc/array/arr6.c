#include<stdio.h>
typedef int n;
n main(){
    n arr[8]={1,2,3,4,5,7,6,8};
    for (n i=0;i<8;i++){
        if (arr[i]%2==0){
            printf("%d\n",arr[i]);
        }
    }

}