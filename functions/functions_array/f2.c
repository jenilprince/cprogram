#include <stdio.h>
void sum(int array[5]){
    int sum=0;
    for (int i=0;i<5;i++){
        sum+=array[i];
    }
    printf("Sum: %d",sum);
}
int main(){
    int array[5]={1,2,3,45,6};
    sum(array);
}