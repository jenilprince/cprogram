#include <stdio.h>
struct Publisher
{
    char publisher[70];
    int year;
};
struct Book
{
    char book_title[70];
    struct Publisher pb;
}
;
int main(){
    struct Book b1;
    printf("enter");
    scanf("%s",b1.book_title);
    printf("enter");
    scanf("%s",b1.pb.publisher);
    printf("enter");
    scanf("%d",&b1.pb.year);
    printf("Book Title: %s\nPublisher: %s, %d",b1.book_title,b1.pb.publisher,b1.pb.year);
}
