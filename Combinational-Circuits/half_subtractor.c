#include <stdio.h>

int main()
{
    int A, B;
    int difference, borrow;

    printf("Enter A: ");
    scanf("%d", &A);

    printf("Enter B: ");
    scanf("%d", &B);

    difference = A ^ B;
    borrow = (!A) & B;

    printf("Difference = %d\n", difference);
    printf("Borrow = %d\n", borrow);

    return 0;
}