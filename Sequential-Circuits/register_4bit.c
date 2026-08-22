#include <stdio.h>

int main()
{
    int D3, D2, D1, D0;
    int clock;

    int Q3 = 0;
    int Q2 = 0;
    int Q1 = 0;
    int Q0 = 0;

    printf("--- 4-BIT REGISTER ---\n");

    printf("Enter D3: ");
    scanf("%d", &D3);

    printf("Enter D2: ");
    scanf("%d", &D2);

    printf("Enter D1: ");
    scanf("%d", &D1);

    printf("Enter D0: ");
    scanf("%d", &D0);

    printf("Enter Clock (0 or 1): ");
    scanf("%d", &clock);

    if (clock == 1)
    {
        Q3 = D3;
        Q2 = D2;
        Q1 = D1;
        Q0 = D0;

        printf("\nData stored successfully.\n");
    }
    else
    {
        printf("\nNo clock pulse. Data is not stored.\n");
    }

    printf("Register Output = %d%d%d%d\n",
           Q3, Q2, Q1, Q0);

    return 0;
}