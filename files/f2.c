#include<stdio.h>
int main(){
    FILE *f2 = fopen("f2.txt","w");
    fputs("Hello World1\n",f2);
    fputs("Hello World3\n",f2);
    fputs("Hello World2\n",f2);
    fputs("Hello World4\n",f2);
    fclose(f2);
    FILE *f21 = fopen("f2.txt","r");
    char ch[100];
    while((fgets(ch,100,f21)!=NULL)){
        printf("%s",ch);
    }
    fclose(f21);
}