/*
*****************************************************************************
                          Workshop - #4 (P2)
Full Name  :MOHAMED ASHRAF BHAROT
Student ID#:139539225
Email      :mamabharot@myseneca.ca
Section    :ZEE
Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    int A_need, O_need, P_need, T_need, C_need;  // APPLES, ORANGES, PEARS, TOMATOES, CABBAGES NEEDED
    int A_pick, O_pick, P_pick, T_pick, C_pick; // APPLES, ORANGES, PEARS, TOMATOES, CABBAGES PICKED
    int check = 0; // to make sure loop ends after satisfyoing condition
    int choice; // want to reapt the whole loop again 
    

    do
    {
        printf("Grocery Shopping\n");
        printf("================\n");

        printf("How many APPLES do you need? : ");
        scanf(" %d", &A_need);

        while (A_need < 0)
        {
            printf("ERROR: Value must be 0 or more.\n");
            printf("How many APPLES do you need? : ");
            scanf(" %d", &A_need);
        }

        printf("\nHow many ORANGES do you need? : ");
        scanf(" %d", &O_need);

        while (O_need < 0)
        {
            printf("ERROR: Value must be 0 or more.\n");
            printf("How many ORANGES do you need? : ");
            scanf(" %d", &O_need);
        }

        printf("\nHow many PEARS do you need? : ");
        scanf(" %d", &P_need);

        while (P_need < 0)
        {
            printf("ERROR: Value must be 0 or more.\n");
            printf("How many PEARS do you need? : ");
            scanf(" %d", &P_need);
        }

        printf("\nHow many TOMATOES do you need? : ");
        scanf(" %d", &T_need);

        while (T_need < 0)
        {
            printf("ERROR: Value must be 0 or more.\n");
            printf("How many TOMATOES do you need? : ");
            scanf(" %d", &T_need);
        }

        printf("\nHow many CABBAGES do you need? : ");
        scanf(" %d", &C_need);

        while (C_need < 0)
        {
            printf("ERROR: Value must be 0 or more.\n");
            printf("How many CABBAGES do you need? : ");
            scanf(" %d", &C_need);
        }


        printf("\n--------------------------\n");
        printf("Time to pick the products!\n");
        printf("--------------------------\n\n");



        while (A_need > 0 && check == 0)
        {            
            printf("Pick some APPLES... how many did you pick? : ");
            scanf(" %d", &A_pick);
            

            if (A_pick > A_need)
            {
                printf("You picked too many... only %d more APPLE(S) are needed.\n", A_need);
            }

            else if (A_pick <= 0)
            {
                printf("ERROR: You must pick at least 1!\n");
            }


            else if ((A_pick > 0) && (A_pick < A_need))
            {
                printf("Looks like we still need some APPLES...\n");
                A_need = A_need - A_pick;
                           
            }

            else if (A_pick == A_need)
            {
                printf("Great, that's the apples done!\n\n");
                check = 1;
                
                
            }
        }
        
         check = 0;
         while (O_need > 0 && check == 0)
         {

           printf("Pick some ORANGES... how many did you pick? : ");
            scanf(" %d", &O_pick);

            if (O_pick > O_need)
            {
                printf("You picked too many... only %d more ORANGE(S) are needed.\n", O_need);
            }

            else if (O_pick <= 0)
            {
                printf("ERROR: You must pick at least 1!\n");
            }

            else if ((O_pick > 0) && (O_pick < O_need))
            {

                printf("Looks like we still need some ORANGES...\n");
                O_need = O_need - O_pick;
            }

            else if (O_pick == O_need)
            {
                printf("Great, that's the oranges done!\n\n");
                check = 1;
            }

       
         }

         check = 0;
        while (P_need > 0 && check ==0)
        {

            printf("Pick some PEARS... how many did you pick? : ");
            scanf(" %d", &P_pick);

            if (P_pick > P_need)
            {
                printf("You picked too many... only %d more PEAR(S) are needed.\n", P_need);
            }

            else if (P_pick <= 0)
            {
                printf("ERROR: You must pick at least 1!\n");
            }

            else if ((P_pick > 0) && (P_pick < P_need))
            {

                printf("Looks like we still need some PEARS...\n");
                P_need = P_need - P_pick;
            }

            else if (P_pick == P_need)
            {
                printf("Great, that's the pears done!\n\n");
                check = 1;
            }

        }

        check = 0;
        while (T_need > 0 && check == 0)
        {

            printf("Pick some TOMATOES... how many did you pick? : ");
            scanf(" %d", &T_pick);

            if (T_pick > T_need)
            {
                printf("You picked too many... only %d more TOMATO(ES) are needed.\n", T_need);
            }

            else if (T_pick <= 0)
            {
                printf("ERROR: You must pick at least 1!\n");
            }

            else if ((T_pick > 0) && (T_pick < T_need))
            {

                printf("Looks like we still need some TOMATOES...\n");
                T_need = T_need - T_pick;
            }

            else if (T_pick == T_need)
            {
                printf("Great, that's the tomatoes done!\n\n");
                check = 1;
            }

        }
        check = 0;
        while (C_need > 0 && check == 0)
        {

            printf("Pick some CABBAGES... how many did you pick? : ");
            scanf(" %d", &C_pick);

            if (C_pick > C_need)
            {
                printf("You picked too many... only %d more CABBAGE(S) are needed.\n", C_need);
            }

            else if (C_pick <= 0)
            {
                printf("ERROR: You must pick at least 1!\n");
            }

            else if ((C_pick > 0) && (C_pick < C_need))
            {

                printf("Looks like we still need some CABBAGES...\n");
                C_need = C_need - C_pick;
            }

            else if (C_pick == C_need)
            {
                printf("Great, that's the cabbages done!\n\n");
                check = 1;
            }
        }
                       
           printf("All the items are picked!\n\n");

           printf("Do another shopping? (0=NO): ");
           scanf(" %d", &choice);
           printf("\n");


    } while (choice != 0);

    printf("Your tasks are done for today - enjoy your free time!\n");
 
    return 0;
}