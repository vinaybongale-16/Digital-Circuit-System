#include <stdio.h>

int main()
{
    int A, B;
    int sum, carry;

    printf("Enter A: ");
    scanf("%d", &A);

    printf("Enter B: ");
    scanf("%d", &B);

    sum = A ^ B;
    carry = A & B;

    printf("Sum = %d\n", sum);
    printf("Carry = %d\n", carry);

    return 0;
}