#include <stdio.h>
void max(int array[5]){
    int max=array[0];
    for (int i=0;i<5;i++){
        if (array[i]>max){
            max=array[i];
        }
    }
    printf("%d",max);
}
int main(){
    int array[5]={1,2,3,45,6};
    max(array);
}