#include <stdio.h>
#include <string.h>
struct Book 
{
    int bookId;
    char title[40];
    float price;
};

int main(){
    struct Book b1;
    b1.bookId=1;
    b1.price=100.90;
    strcpy(b1.title,"Book 1");
    printf("%d, %s, %1.2f",b1.bookId,b1.title,b1.price);
    return 0;
}