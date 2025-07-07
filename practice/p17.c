#include <stdio.h>
int main(){
    int marks[5]={50,60,70,80,90};
    for (int i=0;i<5;i++){
        if (marks[i]>90){
            printf("A grade\n");
        }
        else if (marks[i]>80 && marks[i]<=90){
            printf("B grade\n");
        }
        else if (marks[i]>70 && marks[i]<=80){
            printf("C grade\n");
        }
        else if (marks[i]>60 && marks[i]<=70){
            printf("D grade\n");
        }
        else if (marks[i]>50 && marks[i]<=60){
            printf("E grade\n");
        }
        else if (marks[i]<=50){
            printf("Fail\n");
        }
    }
}