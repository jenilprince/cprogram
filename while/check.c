#include<stdio.h>
int main(){
    int start=0;
    while (start<=10){
        if(start==5){
            continue;
        }
        printf("%d",start);
        start=start+1;
    }
}