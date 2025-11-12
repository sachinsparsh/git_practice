#include <stdio.h>

void biggestOf3() {
    int a, b, c, largest;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("Largest number is: %d\n", largest);
    printf("\n");
    printf("\n");
}
