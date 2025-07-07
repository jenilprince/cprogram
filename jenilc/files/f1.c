#include<stdio.h>
int main(){
    FILE *filepoint = fopen("f1.txt","w");
    fputc('a',filepoint);
    fputc('e',filepoint);
    fputc('i',filepoint);
    fputc('o',filepoint);
    fputc('u',filepoint);
    fclose(filepoint);
    FILE *fp1 = fopen("f1.txt","r");
    char ch;
    int count=0;
    while((ch=fgetc(fp1))!=EOF){
        printf("%c",ch);
        count++;
    }
    printf("Count: %d",count);
    fclose(fp1);
}