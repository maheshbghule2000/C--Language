// positive
#include <stdio.h>

int main(void) {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("%d is a positive number\n", num);
    } else if (num < 0) {
        printf("%d is a negative number\n", num);
    } else {
        printf("The number is zero.\n");
    }
    return 0;
}
