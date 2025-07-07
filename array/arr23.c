#include<stdio.h>
#include<string.h>
int main(){
   char name1[]="Alen";
   char name2[]="Alen"; 
   int result = strcmp(name2,name1);
   if (result==1){
        printf("%s is greater",name2);
   }
   else if (result==-1){
        printf("%s is greater",name1);
   }
   else{
    printf("Same");
   }
}