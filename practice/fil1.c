#include<stdio.h>
int main(){
    FILE *fp = fopen("fil1.txt","w");
    fputs("Hello\n",fp);
    fputs("World\n",fp);
    fclose(fp);
    FILE *fp1 = fopen("fil1.txt","r");
    char ch[100];
    while((fgets(ch,100,fp1))!=NULL){
        printf("%s",ch);
    }
    fclose(fp1);
}