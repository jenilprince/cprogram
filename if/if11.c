#include <stdio.h>
int main(){
    int obt,tot;
    printf("Enter marks: ");
    scanf("%d",&obt);
    printf("Enter Total marks: ");
    scanf("%d",&tot);
    printf("Percentage: %d", (obt*100)/tot);
    if ((obt*100)/tot>90){
        printf("\nA");
    }
    else if ((obt*100)/tot>80 && (obt*100)/tot<=90){
        printf("\nB");
    }
    else if((obt*100)/tot>70 && (obt*100)/tot<=80){
        printf("\nC");
    }
    else{
        printf("\nFail");
    }

}