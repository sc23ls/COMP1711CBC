#include <stdio.h>
int main() {
    int age;
    printf("Hello, please enter your age: ");
    //&age is address of variable
    scanf("%d", &age);
    printf("Your age is %d\n", age);
    return 0;
    }