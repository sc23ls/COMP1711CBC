#include <stdio.h>
int main() {
    int option;
    printf ("Menu Options:\n a, b, c, d, e\nChoose a dish: ");
    scanf ("%d", &option);
    switch (option){
        case 0: printf ("Option 0 has been selected\n");
        break;
        case 1: printf ("Option 1 has been selected\n");
        break;
        default: printf ("A different option has been selected\n");
    }
}