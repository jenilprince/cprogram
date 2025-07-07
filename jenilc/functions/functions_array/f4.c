#include <stdio.h>
void count(int array[5]){
    int ec=0,oc=0;
    for (int i=0;i<5;i++){
        if (array[i]%2==0){
            ec+=1;
        }
        else{
            oc+=1;
        }
    }
    printf("Even: %d\n",ec);
    printf("Odd: %d",oc);
}
int main(){
    int array[5]={1,2,3,45,6};
    count(array);
}