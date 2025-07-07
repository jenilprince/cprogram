#include <stdio.h>
struct Student
{
    int roll;
    char name[10];
};
int main(){
    struct Student s1;
    printf("Enter roll no. ");
    scanf("%d",&s1.roll);
    printf("Enter name ");
    scanf("%s",s1.name);
    FILE *file = fopen("bin.dat","wb");
    fwrite(&s1,sizeof(struct Student),1,file);
    fclose(file);
    struct Student s2;
    FILE *fil = fopen("bin.dat","rb");
    fread(&s2,sizeof(struct Student),1,fil);
    printf("%d\n%s",s2.roll,s2.name);
    fclose(fil);
}