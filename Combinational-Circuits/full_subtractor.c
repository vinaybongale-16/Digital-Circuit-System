#include <stdio.h>

int main()
{
    int A, B, Bin;
    int difference, Bout;

    printf("Enter A: ");
    scanf("%d", &A);

    printf("Enter B: ");
    scanf("%d", &B);

    printf("Enter Bin: ");
    scanf("%d", &Bin);

    difference = A ^ B ^ Bin;

    Bout = ((!A) & B) |
           ((!A) & Bin) |
           (B & Bin);

    printf("Difference = %d\n", difference);
    printf("Borrow Out = %d\n", Bout);

    return 0;
}