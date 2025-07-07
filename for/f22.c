#include<stdio.h>
#include<math.h>
int main(){
    int start=1,stop=10000;
    
    
    for (int i=start;i<=stop;i++){
        int power=0;
        for (int j=i;j>0;j=j/10){
            power=power+1;

        }
        //printf("Power: %d\n",power);
        int sum=0;
        for (int m=i;m>0;m/=10){
            sum+=pow(m%10,power);
        }
        //printf("Sum: %d\n",sum);
        if (sum==i){
            printf("%d\n",i);
        }
    }
    
}