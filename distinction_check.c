#include <stdio.h>
int main() {
    int mark;
    printf ("Enter the mark: \n");
    scanf ("%d", &mark);
    if (mark>=70){ 
        printf ("The mark of %d is a distinction\n", mark);
    }else if (mark < 50){
        printf ("The mark of %d is a fail\n", mark);
    }else{ 
        printf ("The mark of %d is a pass\n", mark);
    }
    return 0;
}