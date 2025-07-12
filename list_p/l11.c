#include<stdio.h>
int main(){
    //Check if all digits are even
    int num = 2486;
    int last,temp=num;int even=1;
    for (int i=temp;i>0;i/=10){
        last=i%10;
        
        if (last%2==1){
            even=0;
            break;
        }
        else{
            even=1;
        }
        }
        if (even){
            printf("Yes");
        }
        else{
            printf("No");
        }
    
}