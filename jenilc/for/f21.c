#include<stdio.h>
int main(){
    //display primes in interval
    int start=1,stop=20;
    for(int i=start;i<=stop;i++){
        int n=i;
        int prime=0;
        for (int j=2;j<=n/2;j++){
            
            if (n%j==0){
                prime=1;
                break;
            }
            
        }
        if (prime==0)
        {
            printf("%d\n",i);
        }
        

    }
}