#include <stdio.h>

int main()
{
    int A, B;
    int Y0, Y1, Y2, Y3;

    printf("Enter A: ");
    scanf("%d", &A);

    printf("Enter B: ");
    scanf("%d", &B);

    Y0 = !A & !B;
    Y1 = !A & B;
    Y2 = A & !B;
    Y3 = A & B;

    printf("Y0 = %d\n", Y0);
    printf("Y1 = %d\n", Y1);
    printf("Y2 = %d\n", Y2);
    printf("Y3 = %d\n", Y3);

    return 0;
}