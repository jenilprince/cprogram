#include <stdio.h>
void change(int *a,int *b){
    *a=*a+10;
    *b=*b+10; 
}
int main(){
    int a=2,b=3;
    change(&a,&b);
    printf("%d%d",a,b);

}