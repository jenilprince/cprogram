#include <stdio.h>
#include <string.h>
int main(){
    char check[]="abcba";
    char ch[50];
    int size=strlen(check);
    for(int i=0;i<size;i++){
        ch[i]=check[size-1-i];
    }
    ch[size]='\0';
    int res=strcmp(check,ch);
    if (res==0){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
}