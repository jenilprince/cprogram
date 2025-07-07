#include<stdio.h>
int  main(){
    int x=15;
    printf("%d\n",x);
    printf("X=%d\n",x);
    printf("Value of x is %d\n",x);
    printf("Value of x=%d\n\n",x);
   
    char name[]="Appu";
    printf("%s\n",name); 
    printf("Hai %s, Good morning\n",name);
    printf("Have a nice day %s\n\n",name);
    
    char char1='A';
    char char2='E';
    char char3='I';
    char char4='O';
    char char5='U';
    printf("The vowels are %c,%c,%c,%c,%c.\n",char1,char2,char3,char4,char5);
    printf("%c,%c,%c,%c,%c are the vowels\n",char1,char2,char3,char4,char5);
    printf("Except %c,%c,%c,%c,%c every alphabets are consonants\n\n",char1,char2,char3,char4,char5);
    
    float x1=15.786;
    printf("%f\n",x1);
    printf("X=%f\n",x1);
    printf("Value of x is %f\n",x1);
    printf("Value of x = %f\n\n",x1);

    return 0;
}