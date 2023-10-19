#include <stdio.h>
int main() {
    int num = -200;
    if (num >= 1){
        printf ("%d is positive\n", num);
    }
    else if(num == 0){ 
        printf ("%d is zero\n", num);
    }
    else{
        printf("%d is negative\n", num);
    }
    return 0;
}