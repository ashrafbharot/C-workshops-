/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #5 (P1)
Full Name  : MOHAMED ASHRAF BHAROT
Student ID#: 139539225
Email      : mamabharot@myseneca.ca
Section    :ZEE

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define MIN_YEAR 2012 
#define MAX_YEAR 2022

int main()
{
    const int JAN = 1, DEC = 12;
    int year, month, a=0;//a used as flag

    printf("General Well-being Log\n");
    printf("======================\n");

    while (a == 0)
    {
        printf("Set the year and month for the well-being log (YYYY MM):");
        scanf("%d %d", &year, &month);

        if (year < MIN_YEAR || year > MAX_YEAR)
        {
            printf("   ERROR: The year must be between 2012 and 2022 inclusive\n");
        }
        if (month < JAN || month > DEC)
        {
            printf("   ERROR: Jan.(1) - Dec.(12)\n");
        }
        else if ((year >= MIN_YEAR && year <=MAX_YEAR) && (month >=JAN && month <= DEC))
        {
            printf("\n*** Log date set! ***\n\n");

            if (month == 1)
            {
                printf("Log starting date: %4d-Jan-01\n\n",year);
            }
            else if (month == 2)
            {
                printf("Log starting date: %4d-Feb-01\n\n", year);
            }
            else if (month == 3)
            {
                printf("Log starting date: %4d-Mar-01\n\n", year);
            }
            else if( month == 4)
            {
                printf("Log starting date: %4d-Apr-01\n\n", year);

            }
            else if (month == 5)
            {
                printf("Log starting date: %4d-May-01\n\n", year);

            }
            else if (month == 6)
            {
                printf("Log starting date: %4d-Jun-01\n\n", year);

            }
            else if (month == 7)
            {
                printf("Log starting date: %4d-Jul-01\n\n", year);

            }
            else if (month == 8)
            {
                printf("Log starting date: %4d-Aug-01\n\n", year);

            }
            else if (month == 9)
            {
                printf("Log starting date: %4d-Sep-01\n\n", year);

            }
            else if (month == 10)
            {
                printf("Log starting date: %4d-Oct-01\n\n", year);

            }
            else if (month == 11)
            {
                printf("Log starting date: %4d-Nov-01\n\n", year);

            }
            else 
            {
                printf("Log starting date: %4d-Dec-01\n\n", year);
                
            }
            a = 1;
        } 
    }


    return 0;
}