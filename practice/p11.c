#include <stdio.h>
int main(){
    int num=1204567982,n=num,count=0,a=num,last;
    for (int i=n;i>0;i/=10){
        count++;
    }printf("Count: %d\n",count);
    int b=num/10,last1,reve=0,rev=0;
    if (count%2==1){
        for (int j=a;j>0;j/=100){
            last=j%10;
            reve=reve*10+last;
        }//printf("%d",reve);
        int ncopy=reve,rev1=0,last1;
        for (int k=ncopy;k>0;k/=10){
            last1=k%10;
            rev1=rev1*10+last1;
        }printf("%d",rev1);
    }
    else if (count%2==0){
        for (int h=b;h>0;h/=100){
            last1=h%10;
            rev=rev*10+last1;
        }//printf("%d",rev);
        int ncopy=rev,rev1=0,last1;
        for (int k=ncopy;k>0;k/=10){
            last1=k%10;
            rev1=rev1*10+last1;
    }printf("%d",rev1);
}
}