#include <stdio.h>
void palindrome(int a){
    int rev=0,n=a;
    for (int i=n;i>0;i/=10){
        rev=rev*10+i%10;
    }
    if (rev==a){
        printf("Palindorome");
    }
    else{
        printf("Not Palindrome");
    }
}
int main(){
    palindrome(1221);
}