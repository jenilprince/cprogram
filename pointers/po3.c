#include <stdio.h>
void swap(int *z,int *y){
    int temp=*z;
    *z=*y;
    *y=temp;
}
int main(){
    int z=1,y=9;
    swap(&z,&y);
    printf("%d,%d",z,y);
}