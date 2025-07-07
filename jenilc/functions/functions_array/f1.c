#include <stdio.h>
void ar(int array[5]){
    for (int i=0;i<5;i++){
        printf("%d\n",array[i]);
    }
}


int main(){
    int array[5]={1,2,3,45,6};
    ar(array);
}