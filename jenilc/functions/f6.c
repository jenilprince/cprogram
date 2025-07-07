#include<stdio.h> 
void count(int a){
    int last,n=a,count=0;
    for (int i=n;i>0;i/=10){
        last=i%10;
        count+=1;
    }
    printf("Count: %d",count);
}
int main(){
    count(1238234);
}