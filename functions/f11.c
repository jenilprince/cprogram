#include <stdio.h>
//Simple Calculator
void sum(int a,int b){
    int sum=a+b;
    printf("%d",sum);
}
void diff(int a,int b){
    int d=a-b;
    printf("%d",d);
}
void multiply(int a,int b){
    int m=a*b;
    printf("%d",m);
}
void divide(int a,int b){
    int div=a/b;
    printf("%d",div);
}
int main(){
    int a,b,choice;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    printf("Enter:\n1 for add\n2 for subtraction\n3 for mul\n4 for div\n");
    scanf("%d",&choice);
    if (choice==1){
        sum(a,b);
    }
    else if (choice==2){
        diff(a,b);
    }
    else if (choice==3){
        multiply(a,b);
    }
    else if (choice==4){
        divide(a,b);
    }
}