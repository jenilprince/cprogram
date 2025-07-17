#include<stdio.h>
int main(){
    int start=0;
    while (start<=10){
        start=start+1;
        if(start-1==5){
            continue;
        }
        printf("%d\n",start-1);
        
    }
}