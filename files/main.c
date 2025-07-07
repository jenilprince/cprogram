#include<stdio.h>
int main(){
    FILE *file=fopen("file.txt","r");
    
    char ch;
    while ((ch=getc(file))!=EOF)
    {
        printf("%c",ch);
    }
    fclose(file);


    FILE *file2=fopen("file.txt","w");
    fputc('a',file2);
    fputc('a',file2);
    fputc('a',file2);
    fputc('a',file2);
    fclose(file2);

}