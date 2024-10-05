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
#define LOG_DAYS 3

int main()
{
    const int JAN = 1, DEC = 12;
    int year = 0, month = 0,i;
    char A = 0, B = 0, C = 0;
    double morning, evening, A_morning = 0, A_evening = 0;
    double sumMorning = 0, sumEvening = 0, sum = 0, A_sum = 0;

    printf("General Well-being Log\n");
    printf("======================\n");
   

    while (year < MIN_YEAR || year > MAX_YEAR || month < JAN || month > DEC)
    {
        printf("Set the year and month for the well-being log (YYYY MM): ");
        scanf("%d %d", &year, &month);
        if (year < MIN_YEAR || year > MAX_YEAR)
        {
            printf("   ERROR: The year must be between 2012 and 2022 inclusive\n");
        }
        if (month < JAN || month > DEC)
        {
            printf("   ERROR: Jan.(1) - Dec.(12)\n");
        }

    }
    printf("\n*** Log date set! ***\n");

    switch (month)
    {

    case 1: A = 'J', B = 'A', C = 'N';
        break;

    case 2: A = 'F', B = 'E', C = 'B';
        break;

    case 3: A = 'M', B = 'A', C = 'R';
        break;

    case 4: A = 'A', B = 'P', C = 'R';
        break;

    case 5:A = 'M', B = 'A', C = 'Y';
        break;

    case 6:  A = 'J', B = 'U', C = 'N';
        break;

    case 7: A = 'J', B = 'L', C = 'Y';
        break;

    case 8: A = 'A', B = 'U', C = 'G';
        break;

    case 9: A = 'S', B = 'E', C = 'P';
        break;

    case 10: A = 'O', B = 'C', C = 'T';
        break;

    case 11: A = 'N', B = 'O', C = 'V';
        break;

    default:

        A = 'D', B = 'E', C = 'C';
        break;
    }


    for (i = 0; i < LOG_DAYS; i++)
    {

        printf("\n%d-%c%c%c-%02d\n", year, A, B, C, i + 1);
        printf("   Morning rating (0.0-5.0): ");
        scanf(" %lf", &morning);

        while (morning < 0.0 || morning > 5.0)
        {
            printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
            printf("   Morning rating (0.0-5.0): ");
            scanf(" %lf", &morning);

        }
        printf("   Evening rating (0.0-5.0): ");
        scanf(" %lf", &evening);

        while (evening < 0.0 || evening > 5.0)
        {

            printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
            printf("   Evening rating (0.0-5.0): ");
            scanf(" %lf", &evening);
        }

        sumMorning += morning;
        sumEvening += evening;

    }

    printf("\nSummary\n");
    printf("=======\n");
    printf("Morning total rating: %6.3lf\n", sumMorning);
    printf("Evening total rating: %6.3lf\n", sumEvening);
    printf("----------------------------\n");
    printf("Overall total rating: %6.3lf\n\n", sum = sumMorning + sumEvening);

    printf("Average morning rating: %4.1lf\n", A_morning = (sumMorning / LOG_DAYS));
    printf("Average evening rating: %4.1lf\n", A_evening = (sumEvening / LOG_DAYS));
    printf("----------------------------\n");
    printf("Average overall rating: %4.1lf\n", A_sum = ((A_morning + A_evening) / 2));




    return 0;
}