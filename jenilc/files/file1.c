#include<stdio.h>
struct student{
    int roll;
    char name[50];
};
int main(){
    struct student s1={1,"alen"};
    FILE *file=fopen("file.dat","wb");
    fwrite(&s1,sizeof(struct student),1,file);
    fclose(file);
    struct student s2;
    FILE *file2=fopen("file.dat","rb");
    fread(&s2,sizeof(struct student),1,file2);
    printf("%d%s",s2.roll,s2.name);
    fclose(file2);
}