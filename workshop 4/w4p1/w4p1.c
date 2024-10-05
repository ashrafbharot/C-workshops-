/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #4 (P1)
Full Name  :MOHAMED ASHRAF BHAROT
Student ID#:139539225
Email      :mamabharot@myseneca.ca
Section    :ZEE

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    char Ltype; // Loop type
    int Num;// Number of times requested iteration
    int a; //how much time want to display loop type

    printf("+----------------------+\n");
    printf("Loop application STARTED\n");
    printf("+----------------------+\n\n");

    do
    {
        printf("D = do/while | W = while | F = for | Q = quit\n");
        printf("Enter loop type and the number of times to iterate (Quit=Q0): ");
        scanf(" %c%d", &Ltype, &Num);

        if (Ltype == 'D')
        {
            if (Num >= 3 && Num <= 20)
            {
                a=0;
                printf("DO-WHILE: ");
                do
                {
                    printf("%c", Ltype);
                    a++;
                } while (a < Num);

                printf("\n\n");

            }
            else
            {
                printf("ERROR: The number of iterations must be between 3-20 inclusive!\n\n");
            }
        }

        else if (Ltype == 'W')
        {
            if (Num >= 3 && Num <= 20)
            {
                a=0;
                printf("WHILE   : ");

                while (a < Num)
                {
                    printf("%c", Ltype);
                    a++;
                }

                printf("\n\n");

            }
            else
            {
                printf("ERROR: The number of iterations must be between 3-20 inclusive!\n\n");
            }
        }

        else if (Ltype == 'F')
        {
            if (Num >= 3 && Num <= 20)
            {
                
                printf("FOR     : ");

                for (a = 0; a < Num; a++)
                {
                    printf("%c", Ltype);
                    
                }

                printf("\n\n");

            }
            else
            {
                printf("ERROR: The number of iterations must be between 3-20 inclusive!\n\n");
            }
        }

        else if (Ltype == 'Q')
        {
            if (Num == 0)
            {
                printf("\n+--------------------+\n");
                printf("Loop application ENDED\n");
                printf("+--------------------+\n");
            }
            else
            {
                printf("ERROR: To quit, the number of iterations should be 0!\n\n");
            }
        }


        else
        {
            printf("ERROR: Invalid entered value(s)!\n\n");
        }


    } while (!(Ltype == 'Q' && Num == 0));


    return 0;
}
