#include <stdio.h>
#include "combinational.h"


/* ========== BINARY INPUT VALIDATION ========== */

int getBinaryInput(const char *name)
{
    int value;

    while (1)
    {
        printf("Enter %s (0 or 1): ", name);
        scanf("%d", &value);

        if (value == 0 || value == 1)
        {
            return value;
        }

        printf("Invalid input! Please enter only 0 or 1.\n");
    }
}


/* ========== HALF ADDER ========== */

void halfAdder()
{
    int A, B;
    int sum, carry;

    printf("\n--- HALF ADDER ---\n");

    A = getBinaryInput("A");
    B = getBinaryInput("B");

    sum = A ^ B;
    carry = A & B;

    printf("\nSum   = %d\n", sum);
    printf("Carry = %d\n", carry);
}


/* ========== FULL ADDER ========== */

void fullAdder()
{
    int A, B, Cin;
    int sum, Cout;

    printf("\n--- FULL ADDER ---\n");

    A = getBinaryInput("A");
    B = getBinaryInput("B");
    Cin = getBinaryInput("Cin");

    sum = A ^ B ^ Cin;
    Cout = (A & B) | (B & Cin) | (A & Cin);

    printf("\nSum  = %d\n", sum);
    printf("Cout = %d\n", Cout);
}


/* ========== HALF SUBTRACTOR ========== */

void halfSubtractor()
{
    int A, B;
    int difference, borrow;

    printf("\n--- HALF SUBTRACTOR ---\n");

    A = getBinaryInput("A");
    B = getBinaryInput("B");

    difference = A ^ B;
    borrow = (!A) & B;

    printf("\nDifference = %d\n", difference);
    printf("Borrow     = %d\n", borrow);
}


/* ========== FULL SUBTRACTOR ========== */

void fullSubtractor()
{
    int A, B, Bin;
    int difference, Bout;

    printf("\n--- FULL SUBTRACTOR ---\n");

    A = getBinaryInput("A");
    B = getBinaryInput("B");
    Bin = getBinaryInput("Bin");

    difference = A ^ B ^ Bin;

    Bout = ((!A) & B) |
           ((!A) & Bin) |
           (B & Bin);

    printf("\nDifference = %d\n", difference);
    printf("Borrow Out = %d\n", Bout);
}


/* ========== 2:1 MULTIPLEXER ========== */

void mux2to1()
{
    int I0, I1, S;
    int output;

    printf("\n--- 2:1 MULTIPLEXER ---\n");

    I0 = getBinaryInput("I0");
    I1 = getBinaryInput("I1");
    S = getBinaryInput("Select");

    output = (!S & I0) | (S & I1);

    printf("\nMUX Output = %d\n", output);
}


/* ========== 4:1 MULTIPLEXER ========== */

void mux4to1()
{
    int I0, I1, I2, I3;
    int S0, S1;
    int output;

    printf("\n--- 4:1 MULTIPLEXER ---\n");

    I0 = getBinaryInput("I0");
    I1 = getBinaryInput("I1");
    I2 = getBinaryInput("I2");
    I3 = getBinaryInput("I3");

    S1 = getBinaryInput("S1");
    S0 = getBinaryInput("S0");

    output = (!S1 & !S0 & I0) |
             (!S1 & S0 & I1) |
             (S1 & !S0 & I2) |
             (S1 & S0 & I3);

    printf("\nMUX Output = %d\n", output);
}


/* ========== 1:4 DEMULTIPLEXER ========== */

void demux1to4()
{
    int input;
    int S0, S1;
    int Y0, Y1, Y2, Y3;

    printf("\n--- 1:4 DEMULTIPLEXER ---\n");

    input = getBinaryInput("Input");
    S1 = getBinaryInput("S1");
    S0 = getBinaryInput("S0");

    Y0 = input & !S1 & !S0;
    Y1 = input & !S1 & S0;
    Y2 = input & S1 & !S0;
    Y3 = input & S1 & S0;

    printf("\nY0 = %d\n", Y0);
    printf("Y1 = %d\n", Y1);
    printf("Y2 = %d\n", Y2);
    printf("Y3 = %d\n", Y3);
}


/* ========== 2:4 DECODER ========== */

void decoder2to4()
{
    int A, B;
    int Y0, Y1, Y2, Y3;

    printf("\n--- 2:4 DECODER ---\n");

    A = getBinaryInput("A");
    B = getBinaryInput("B");

    Y0 = !A & !B;
    Y1 = !A & B;
    Y2 = A & !B;
    Y3 = A & B;

    printf("\nY0 = %d\n", Y0);
    printf("Y1 = %d\n", Y1);
    printf("Y2 = %d\n", Y2);
    printf("Y3 = %d\n", Y3);
}


/* ========== 4:2 ENCODER ========== */

void encoder4to2()
{
    int D0, D1, D2, D3;
    int Y0, Y1;

    printf("\n--- 4:2 ENCODER ---\n");
    printf("Only one input can be active (1).\n");

    while (1)
    {
        D0 = getBinaryInput("D0");
        D1 = getBinaryInput("D1");
        D2 = getBinaryInput("D2");
        D3 = getBinaryInput("D3");

        if (D0 + D1 + D2 + D3 == 1)
        {
            break;
        }

        printf("\nInvalid input combination!\n");
        printf("Exactly one input must be 1.\n\n");
    }

    Y0 = D1 | D3;
    Y1 = D2 | D3;

    printf("\nEncoded Output = %d%d\n", Y1, Y0);
}


/* ========== 1-BIT COMPARATOR ========== */

void comparator()
{
    int A, B;
    int greater, equal, less;

    printf("\n--- 1-BIT COMPARATOR ---\n");

    A = getBinaryInput("A");
    B = getBinaryInput("B");

    greater = A & (!B);
    equal = !(A ^ B);
    less = (!A) & B;

    printf("\nA > B = %d\n", greater);
    printf("A = B = %d\n", equal);
    printf("A < B = %d\n", less);
}