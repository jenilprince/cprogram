#include <stdio.h>
int main(){
    int p,ch,b,m,cs,tot,perc;
    printf("Total mark: ");
    scanf("%d",&tot);
    printf("Enter Phy mark: ");
    scanf("%d",&p);
    printf("Enter chem mark: ");
    scanf("%d",&ch);
    printf("Enter bio mark: ");
    scanf("%d",&b);
    printf("Enter math mark: ");
    scanf("%d",&m);
    printf("Enter cs mark: ");
    scanf("%d",&cs);
    perc=(p+ch+b+m+cs)*100/tot;
    printf("Percentage: %d\n",perc);
    if (perc>90 && perc<=100){
        printf("A");
    }
    else if (perc>80 && perc <=90){
        printf("B");
    }
    else if (perc>70 && perc<=80){
        printf("C");
    }
    else if (perc>60 && perc<=70){
        printf("D");
    }
    else if (perc>40 && perc <=60){
        printf("E");
    }
    else if (perc<40){
        printf("F");
    }

}