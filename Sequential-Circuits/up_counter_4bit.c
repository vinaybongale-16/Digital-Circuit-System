#include <stdio.h>

int main()
{
    int count = 0;
    int pulses;

    printf("Enter number of clock pulses: ");
    scanf("%d", &pulses);

    for (int i = 0; i < pulses; i++)
    {
        printf("Clock Pulse %d -> ", i + 1);

        printf("%d%d%d%d\n",
               (count >> 3) & 1,
               (count >> 2) & 1,
               (count >> 1) & 1,
               count & 1);

        count = (count + 1) % 16;
    }

    return 0;
}