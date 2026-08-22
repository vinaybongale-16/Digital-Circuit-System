#include <stdio.h>

int main()
{
    int S, R, Q = 0;

    printf("Enter S: ");
    scanf("%d", &S);

    printf("Enter R: ");
    scanf("%d", &R);

    if (S == 0 && R == 0)
        printf("No Change\n");

    else if (S == 0 && R == 1)
        Q = 0;

    else if (S == 1 && R == 0)
        Q = 1;

    else
    {
        printf("Invalid State\n");
        return 0;
    }

    printf("Q = %d\n", Q);
    printf("Qbar = %d\n", !Q);

    return 0;
}