#include <stdio.h>
#include <string.h>
void rev(char name[]){
    int size=strlen(name);
    for (int i=size;i>=0;i--){
        printf("%c",name[i]);
    }
}
int main(){
    rev("abcd");
}