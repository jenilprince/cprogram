#include<stdio.h>
#include<string.h>
struct Movie
{
    int mid;
    char title[200];
    float rating;
};
int main(){
   struct Movie m1;
   struct Movie *ptr;
   ptr->mid=2;
   ptr->rating=6.6;
   strcpy(ptr->title,"alen");
   printf("%d%f%s",ptr->mid,ptr->rating,ptr->title);
}