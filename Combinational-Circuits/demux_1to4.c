#include <stdio.h>

int main()
{
    int input, S1, S0;
    int Y0, Y1, Y2, Y3;

    printf("Enter Input: ");
    scanf("%d", &input);

    printf("Enter S1: ");
    scanf("%d", &S1);

    printf("Enter S0: ");
    scanf("%d", &S0);

    Y0 = input & !S1 & !S0;
    Y1 = input & !S1 & S0;
    Y2 = input & S1 & !S0;
    Y3 = input & S1 & S0;

    printf("Y0 = %d\n", Y0);
    printf("Y1 = %d\n", Y1);
    printf("Y2 = %d\n", Y2);
    printf("Y3 = %d\n", Y3);

    return 0;
}