#include <stdio.h>
int main(){
    char ch[100]="ABCD E";
    char *point=ch;
    for (int i=0;i<6;i++){
        printf("%c\n",ch[i]);
    }
}
    
