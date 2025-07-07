#include <stdio.h>
int main(){
    char inp[100]="string";
    int count=0;
    for (int i=0;inp[i]!='\0';i++){
        if (inp[i]=='a'||inp[i]=='e'||inp[i]=='i'||inp[i]=='o'||inp[i]=='u'||inp[i]=='A'||inp[i]=='E'||inp[i]=='I'||inp[i]=='O'||inp[i]=='U'){
            count++;
        }
    }printf("Count: %d",count);
}