#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter 3 numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    if(a > b) {
        if(a > c)
            printf("Max is: %d\n", a);
        else
            printf("Max is: %d\n", c);
    } else {
        if(b > c)
            printf("Max is: %d\n", b);
        else
            printf("Max is: %d\n", c);
    }

    return 0;
}
