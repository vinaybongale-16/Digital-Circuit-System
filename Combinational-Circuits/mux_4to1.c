#include <stdio.h>

int main()
{
    int I0, I1, I2, I3;
    int S0, S1;
    int output;

    printf("Enter I0: ");
    scanf("%d", &I0);

    printf("Enter I1: ");
    scanf("%d", &I1);

    printf("Enter I2: ");
    scanf("%d", &I2);

    printf("Enter I3: ");
    scanf("%d", &I3);

    printf("Enter S1: ");
    scanf("%d", &S1);

    printf("Enter S0: ");
    scanf("%d", &S0);

    output = (!S1 & !S0 & I0) |
             (!S1 & S0 & I1) |
             (S1 & !S0 & I2) |
             (S1 & S0 & I3);

    printf("Output = %d\n", output);

    return 0;
}