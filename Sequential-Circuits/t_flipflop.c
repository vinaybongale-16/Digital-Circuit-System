#include <stdio.h>

int main()
{
    int T, Q = 0;

    printf("Enter T: ");
    scanf("%d", &T);

    if (T == 1)
        Q = !Q;

    printf("Q = %d\n", Q);
    printf("Qbar = %d\n", !Q);

    return 0;
}