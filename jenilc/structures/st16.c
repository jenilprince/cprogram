#include <stdio.h>

struct Contact {
    long int mob;
    char email[60];
};

struct Person {
    char name[80];
    struct Contact det;
};

int main() {
    struct Person p1 = {"John", {9876543210, "john@example.com"}};
    
    printf("Name: %s\n", p1.name);
    printf("Mobile: %ld\n", p1.det.mob);
    printf("Email: %s\n", p1.det.email);

    return 0;
}
