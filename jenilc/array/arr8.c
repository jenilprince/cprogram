#include<stdio.h>
int main(){
    int arr[6]={1,2,3,4,5,6};
    
    int inp;
    printf("Check: ");
    scanf("%d",&inp);
    int yeah=0;

    for (int i=0;i<6;i++){
        if (inp==arr[i]){
            yeah=1;

        }
        
    }
    if (yeah==1){
        printf("Yeah");
    }
    else{
        printf("Nop");
    }
}