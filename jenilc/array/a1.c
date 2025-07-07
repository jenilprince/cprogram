#include<stdio.h>
int main(){
    int marks[3][3]={{1,2,3},{2,3,4},{5,6,7}};
    marks[0][2]=20;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",marks[i][j]);
        }
        printf("\n");
    }    
}