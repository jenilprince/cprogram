#include<stdio.h> 
void sign(int a){
    if (a>0){
        printf("Positive");
    }
    else if (a<0){
        printf("Negative");
    }
    else{
        printf("Zero");
    }
}
int main(){
    sign(-2);
}