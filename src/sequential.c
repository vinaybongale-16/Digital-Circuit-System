#include <stdio.h>
#include "sequential.h"
#include "combinational.h"


/* ========== SR FLIP-FLOP ========== */

void srFlipFlop()
{
    int S, R;
    static int Q = 0;

    printf("\n--- SR FLIP-FLOP ---\n");

    S = getBinaryInput("S");
    R = getBinaryInput("R");

    if (S == 0 && R == 0)
    {
        printf("No Change\n");
    }
    else if (S == 0 && R == 1)
    {
        Q = 0;
        printf("Reset\n");
    }
    else if (S == 1 && R == 0)
    {
        Q = 1;
        printf("Set\n");
    }
    else
    {
        printf("Invalid State (S = 1, R = 1)\n");
        printf("Previous state is retained.\n");
    }

    printf("Q    = %d\n", Q);
    printf("Qbar = %d\n", !Q);
}


/* ========== JK FLIP-FLOP ========== */

void jkFlipFlop()
{
    int J, K;
    static int Q = 0;

    printf("\n--- JK FLIP-FLOP ---\n");

    J = getBinaryInput("J");
    K = getBinaryInput("K");

    if (J == 0 && K == 0)
    {
        printf("No Change\n");
    }
    else if (J == 0 && K == 1)
    {
        Q = 0;
        printf("Reset\n");
    }
    else if (J == 1 && K == 0)
    {
        Q = 1;
        printf("Set\n");
    }
    else
    {
        Q = !Q;
        printf("Toggle\n");
    }

    printf("Q    = %d\n", Q);
    printf("Qbar = %d\n", !Q);
}


/* ========== D FLIP-FLOP ========== */

void dFlipFlop()
{
    int D;
    static int Q = 0;

    printf("\n--- D FLIP-FLOP ---\n");

    D = getBinaryInput("D");

    Q = D;

    printf("Q    = %d\n", Q);
    printf("Qbar = %d\n", !Q);
}


/* ========== T FLIP-FLOP ========== */

void tFlipFlop()
{
    int T;
    static int Q = 0;

    printf("\n--- T FLIP-FLOP ---\n");

    T = getBinaryInput("T");

    if (T == 0)
    {
        printf("No Change\n");
    }
    else
    {
        Q = !Q;
        printf("Toggle\n");
    }

    printf("Q    = %d\n", Q);
    printf("Qbar = %d\n", !Q);
}


/* ========== 4-BIT REGISTER ========== */

void register4Bit()
{
    int D3, D2, D1, D0;
    int clock;

    static int Q3 = 0;
    static int Q2 = 0;
    static int Q1 = 0;
    static int Q0 = 0;

    printf("\n--- 4-BIT REGISTER ---\n");

    D3 = getBinaryInput("D3");
    D2 = getBinaryInput("D2");
    D1 = getBinaryInput("D1");
    D0 = getBinaryInput("D0");

    clock = getBinaryInput("Clock");

    if (clock == 1)
    {
        Q3 = D3;
        Q2 = D2;
        Q1 = D1;
        Q0 = D0;

        printf("Data stored successfully.\n");
    }
    else
    {
        printf("No clock pulse. Previous data retained.\n");
    }

    printf("Register Output = %d%d%d%d\n",
           Q3, Q2, Q1, Q0);
}


/* ========== 4-BIT UP COUNTER ========== */

void upCounter()
{
    int count = 0;
    int pulses;

    printf("\n--- 4-BIT UP COUNTER ---\n");

    printf("Enter number of clock pulses: ");
    scanf("%d", &pulses);

    if (pulses <= 0)
    {
        printf("Please enter a positive number of pulses.\n");
        return;
    }

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
}


/* ========== 4-BIT DOWN COUNTER ========== */

void downCounter()
{
    int count = 15;
    int pulses;

    printf("\n--- 4-BIT DOWN COUNTER ---\n");

    printf("Enter number of clock pulses: ");
    scanf("%d", &pulses);

    if (pulses <= 0)
    {
        printf("Please enter a positive number of pulses.\n");
        return;
    }

    for (int i = 0; i < pulses; i++)
    {
        printf("Clock Pulse %d -> ", i + 1);

        printf("%d%d%d%d\n",
               (count >> 3) & 1,
               (count >> 2) & 1,
               (count >> 1) & 1,
               count & 1);

        count--;

        if (count < 0)
        {
            count = 15;
        }
    }
}