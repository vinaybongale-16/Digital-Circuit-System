#include <stdio.h>

int main()
{
    int D, Q;

    printf("Enter D: ");
    scanf("%d", &D);

    Q = D;

    printf("Q = %d\n", Q);
    printf("Qbar = %d\n", !Q);

    return 0;
}