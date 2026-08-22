#include <stdio.h>

int main()
{
    int D0, D1, D2, D3;
    int Y0, Y1;

    printf("Enter D0: ");
    scanf("%d", &D0);

    printf("Enter D1: ");
    scanf("%d", &D1);

    printf("Enter D2: ");
    scanf("%d", &D2);

    printf("Enter D3: ");
    scanf("%d", &D3);

    Y0 = D1 | D3;
    Y1 = D2 | D3;

    printf("Output = %d%d\n", Y1, Y0);

    return 0;
}