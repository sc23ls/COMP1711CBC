#include <stdio.h>

int main(){
    int length;
    int width;
    int area;
    printf("Please enter the length:");
    scanf("%d", &length);
    printf("Please enter the width:");
    scanf("%d", &width);
    area = length * width;
    printf ("The area is %d\n", area);
    return 0;
}