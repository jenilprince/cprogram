#include<stdio.h>
#include<string.h>
int main(){
    char array[2][2]={{'a','b'},{'c','d'}};
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            printf("[%c]\t",array[i][j]);
        }
        printf("\n");
    }
}