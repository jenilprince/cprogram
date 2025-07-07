#include<stdio.h>
int  main(){
    char char1;
    char char2;
    char char3;
    char char4;
    char char5;
    printf("Enter: ");
    scanf("%c\n%c\n%c\n%c\n%c",&char1,&char2,&char3,&char4,&char5);
    printf("The vowels are %c,%c,%c,%c,%c.\n",char1,char2,char3,char4,char5);
    printf("%c,%c,%c,%c,%c are the vowels\n",char1,char2,char3,char4,char5);
    printf("Except %c,%c,%c,%c,%c every alphabets are consonants\n",char1,char2,char3,char4,char5);
}