#include <stdio.h>

int main()
{
    int A, B, Cin;
    int sum, Cout;

    printf("Enter A: ");
    scanf("%d", &A);

    printf("Enter B: ");
    scanf("%d", &B);

    printf("Enter Cin: ");
    scanf("%d", &Cin);

    sum = A ^ B ^ Cin;
    Cout = (A & B) | (B & Cin) | (A & Cin);

    printf("Sum = %d\n", sum);
    printf("Cout = %d\n", Cout);

    return 0;
}