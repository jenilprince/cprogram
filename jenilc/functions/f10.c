#include <stdio.h>
#include <string.h>
void vowel(char name[]){
    int count=0;
    for(int i=0;i<strlen(name);i++){
        char ch=name[i];
        if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            count=count+1;
        }
    }
    printf("%d",count);
}
int main(){
    vowel("aeiouAEIOU");
}