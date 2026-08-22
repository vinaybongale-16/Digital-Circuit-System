#include <stdio.h>
#include "combinational.h"
#include "sequential.h"

int main()
{
    int mainChoice;
    int combChoice;
    int seqChoice;

    while (1)
    {
        printf("\n");
        printf("=============================================\n");
        printf("           DIGITAL CIRCUIT SYSTEM\n");
        printf("=============================================\n");
        printf("1. Combinational Circuits\n");
        printf("2. Sequential Circuits\n");
        printf("3. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &mainChoice);


        /* ========== COMBINATIONAL MENU ========== */

        if (mainChoice == 1)
        {
            while (1)
            {
                printf("\n");
                printf("=============================================\n");
                printf("         COMBINATIONAL CIRCUITS\n");
                printf("=============================================\n");

                printf("1.  Half Adder\n");
                printf("2.  Full Adder\n");
                printf("3.  Half Subtractor\n");
                printf("4.  Full Subtractor\n");
                printf("5.  2:1 Multiplexer\n");
                printf("6.  4:1 Multiplexer\n");
                printf("7.  1:4 Demultiplexer\n");
                printf("8.  2:4 Decoder\n");
                printf("9.  4:2 Encoder\n");
                printf("10. 1-Bit Comparator\n");
                printf("11. Back to Main Menu\n");

                printf("\nEnter your choice: ");
                scanf("%d", &combChoice);

                switch (combChoice)
                {
                    case 1:
                        halfAdder();
                        break;

                    case 2:
                        fullAdder();
                        break;

                    case 3:
                        halfSubtractor();
                        break;

                    case 4:
                        fullSubtractor();
                        break;

                    case 5:
                        mux2to1();
                        break;

                    case 6:
                        mux4to1();
                        break;

                    case 7:
                        demux1to4();
                        break;

                    case 8:
                        decoder2to4();
                        break;

                    case 9:
                        encoder4to2();
                        break;

                    case 10:
                        comparator();
                        break;

                    case 11:
                        break;

                    default:
                        printf("\nInvalid Choice!\n");
                }

                if (combChoice == 11)
                {
                    break;
                }
            }
        }


        /* ========== SEQUENTIAL MENU ========== */

        else if (mainChoice == 2)
        {
            while (1)
            {
                printf("\n");
                printf("=============================================\n");
                printf("           SEQUENTIAL CIRCUITS\n");
                printf("=============================================\n");

                printf("1. SR Flip-Flop\n");
                printf("2. JK Flip-Flop\n");
                printf("3. D Flip-Flop\n");
                printf("4. T Flip-Flop\n");
                printf("5. 4-Bit Register\n");
                printf("6. 4-Bit Up Counter\n");
                printf("7. 4-Bit Down Counter\n");
                printf("8. Back to Main Menu\n");

                printf("\nEnter your choice: ");
                scanf("%d", &seqChoice);

                switch (seqChoice)
                {
                    case 1:
                        srFlipFlop();
                        break;

                    case 2:
                        jkFlipFlop();
                        break;

                    case 3:
                        dFlipFlop();
                        break;

                    case 4:
                        tFlipFlop();
                        break;

                    case 5:
                        register4Bit();
                        break;

                    case 6:
                        upCounter();
                        break;

                    case 7:
                        downCounter();
                        break;

                    case 8:
                        break;

                    default:
                        printf("\nInvalid Choice!\n");
                }

                if (seqChoice == 8)
                {
                    break;
                }
            }
        }


        /* ========== EXIT ========== */

        else if (mainChoice == 3)
        {
            printf("\nThank you for using Digital Circuit System!\n");
            printf("Program Closed.\n");
            break;
        }

        else
        {
            printf("\nInvalid Choice!\n");
        }
    }

    return 0;
}