#include <stdio.h>
int main() {
    char name[15];
    printf("Hello, please enter your name:");
    //lets us read the keyboard
    scanf("%s", name);
    printf("Your name is %s\n", name);
    return 0;
    }