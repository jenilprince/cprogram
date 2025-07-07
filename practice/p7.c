#include <stdio.h>
#include<string.h>
int main(){
    int num=9852,last,n=num;
    int count=0;
    for (int i=n;i>0;i/=10){
        count++;
    }
    printf("Count: %d\n",count);
    for (int i=0;i<count;i=i+1){
        for (int j=num;j>0;j/=10){
            last=j%10;
        }
    }
    printf("First digit: %d\n",last);
}