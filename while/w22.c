#include<stdio.h>
#include<math.h>
int main(){
    //display armstrong
    int start,stop;
    printf("Enter start number: ");
    scanf("%d",&start);
    printf("Enter stop number: ");
    scanf("%d",&stop);
    while (start<=stop){
        int n=start,b=stop;
        int powr=0;
        while (n>0){
            n=n/10;
            powr=powr+1;
        }
        int m=start,last,sum=0;
        
        while (m>0){
            last=m%10;
            sum+=pow(last,powr);
            m/=10;
        }
        //printf("%d\n",sum);
        if (start==sum){
            printf("%d\n",start);
        }
        start++;
    }

}
