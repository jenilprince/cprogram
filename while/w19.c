#include<stdio.h>
int main(){
    int a=12,n=a,i=1,count=1,flag=0;
    while(i<=(n/2)+1){
        count++;
        if (n%i==0){
            printf("%d\n",i);
        }
        if (i!=count && i==1){
            flag=1;
        }
        
        
        i++;
        
    }
    if (flag==1){
        printf("prime");
    }
    else if(flag==0){
        printf("not prime");
    }


}