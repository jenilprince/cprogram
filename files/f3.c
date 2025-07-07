#include <stdio.h>
int main(){
    char ch[100];
    FILE *f2 = fopen("f2.txt","r");
    FILE *f1=fopen("f1.txt","w");
   
    while((fgets(ch,100,f2))!=NULL){
            
             fputs(ch,f1);
        }
    fclose(f1);
    fclose(f2);
    FILE *fpo=fopen("Sampl.txt","r");
    if (fpo==NULL){
        perror("Error");
        return 1;
    }
    
    

    
}