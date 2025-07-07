#include <stdio.h>
int main(){
    //check triangle is equi,scal,isoc
    int a=4,b=4,c=4;
    if(a==b && a==c && b==c){
        printf("Equilateral");
    }
    else if ((a==b && b!=c && a!=c) || (b==c && c!=a && b!=a) || (c==a && a!=b && c!=b)){
        printf("Isoceles");
    }
    else{
        printf("Scalene");
    }
    return 0;
}