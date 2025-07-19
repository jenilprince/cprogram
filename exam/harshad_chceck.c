#include<stdio.h>
void harshad(int a){
    int sum=0,last,temp=a;
    for (int i=temp;i>0;i/=10){
        last=i%10;
        sum+=last;
    }
    if (a%sum==0){
        printf("Harshad");
    }
    else{
        printf("Not Harshad");
    }
}
int main(){
    int num=12;
    harshad(num);

}