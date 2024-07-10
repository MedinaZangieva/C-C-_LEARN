#include <stdio.h>

int main() {
    int x = 33;

    switch(x) {
        case 1:
        printf("1");
        break;

        case 5:
        printf("5");
        break;

        case 12:
        printf("12/n");
        break;
    default:
        printf("Error\n");
        break;
    }

    return 0;
}

