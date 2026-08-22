#include <stdio.h>

int main()
{
    int A, B;

    printf("Enter A: ");
    scanf("%d", &A);

    printf("Enter B: ");
    scanf("%d", &B);

    if (A > B)
    {
        printf("A is greater than B\n");
    }
    else if (A < B)
    {
        printf("A is less than B\n");
    }
    else
    {
        printf("A is equal to B\n");
    }

    return 0;
}