#include<stdio.h> 
void table(int a){
    for (int i=1;i<11;i++){
        printf("%d * %d == %d\n",i,a,i*a);
    }
}
int main(){
    table(5);
}