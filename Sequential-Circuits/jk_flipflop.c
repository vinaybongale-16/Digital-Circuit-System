#include <stdio.h>

int main()
{
    int J, K, Q = 0;

    printf("Enter J: ");
    scanf("%d", &J);

    printf("Enter K: ");
    scanf("%d", &K);

    if (J == 0 && K == 0)
    {
        printf("No Change\n");
    }
    else if (J == 0 && K == 1)
    {
        Q = 0;
    }
    else if (J == 1 && K == 0)
    {
        Q = 1;
    }
    else
    {
        Q = !Q;
    }

    printf("Q = %d\n", Q);
    printf("Qbar = %d\n", !Q);

    return 0;
}