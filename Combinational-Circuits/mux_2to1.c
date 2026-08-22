#include <stdio.h>

int main()
{
    int I0, I1, S;
    int output;

    printf("Enter I0: ");
    scanf("%d", &I0);

    printf("Enter I1: ");
    scanf("%d", &I1);

    printf("Enter Select: ");
    scanf("%d", &S);

    output = (!S & I0) | (S & I1);

    printf("Output = %d\n", output);

    return 0;
}