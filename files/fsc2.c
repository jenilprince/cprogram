#include<stdio.h>
int main(){
    FILE *fp = fopen("file.txt","r");
    char ch[100];
    fscanf(fp,"%s",ch);
    printf("%s\n",ch);
    fclose(fp);
    int count=0;
    for (int i=0;ch[i]!='\0';i++){
        char c=ch[i];
        if(c=='a'||c=='e'||c=='i'||c=='u'||c=='o'){
            count++;
            printf("Vowel\n");
        }
        else{
            printf("Consonant\n");
        }
    }
    printf("Count: %d",count);
    return 0;
}