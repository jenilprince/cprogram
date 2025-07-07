#include <stdio.h>
#include <string.h>
struct Player 
{
    int id;
    char name[67];
    int score;
}
;
int main()
{
    struct Player p1[3];
    for (int i=0;i<3;i++){
        printf("Enter id: ");
        scanf("%d",&p1[i].id);
        printf("Enter name: ");
        scanf("%s",p1[i].name);
        printf("Enter score: ");
        scanf("%d",&p1[i].score);
    }
    for (int i=0;i<3;i++){
        printf("%d,%s,%d",p1[i].id,p1[i].name,p1[i].score);
        printf("\n");
    }

}