/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #6 (P1)
Full Name  :Mohamed Ashraf Bharot
Student ID#:139539225
Email      :mamabharot@myseneca.ca
Section    :ZEE

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS
#define MAX_ITEM 10
#define MIN_ITEM 1
#include <stdio.h>


int main(void)
{

    const double maxIncome = 400000.00, minIncome = 500.00, ItemPrice = 100.00;
    double Income;
    double ItemsCost[MAX_ITEM] = { 0 };
    int Items, i;
    int ImpLevel[MAX_ITEM] = { 0 };
    int MinImp = 1, MaxImp = 3;
    char finance[MAX_ITEM];
    double TotalCost = 0;
    int a = 0; // used for flag
    int selection;
    int priority;
    int financeOption=0;
    int year, month, allMonth;
    double sumFilterCost = 0;
    int note;

    

    printf("+--------------------------+\n");
    printf("+   Wish List Forecaster   |\n");
    printf("+--------------------------+\n");

    printf("\nEnter your monthly NET income: $");
    scanf(" %lf", &Income);

    while ((Income > minIncome || Income < maxIncome) && (a == 0))
    {
        if (Income < minIncome)
        {
            printf("ERROR: You must have a consistent monthly income of at least $500.00\n");
            printf("\nEnter your monthly NET income: $");
            scanf(" %lf", &Income);
        }
        else if (Income > maxIncome)
        {
            printf("ERROR: Liar! I'll believe you if you enter a value no more than $400000.00\n");
            printf("\nEnter your monthly NET income: $");
            scanf(" %lf", &Income);
            a = 1;
        }

    }


    printf("\nHow many wish list items do you want to forecast?: ");
    scanf(" %d", &Items);


    while (Items <MIN_ITEM || Items >MAX_ITEM)
    {

        printf("ERROR: List is restricted to between 1 and 10 items.\n\n");
        printf("How many wish list items do you want to forecast?: ");
        scanf(" %d", &Items);
    }

    for (i = 0; i < Items; i++)
    {
        printf("\nItem-%d Details:\n", i + 1);
        printf("   Item cost: $");
        scanf(" %lf", &ItemsCost[i]);

        while (ItemsCost[i] < ItemPrice)
        {
            printf("      ERROR: Cost must be at least $100.00\n");
            printf("   Item cost: $");
            scanf(" %lf", &ItemsCost[i]);
        }

        TotalCost += ItemsCost[i];

        printf("   How important is it to you? [1=must have, 2=important, 3=want]: ");
        scanf(" %d", &ImpLevel[i]);

        while (ImpLevel[i] < MinImp || ImpLevel[i] >MaxImp)
        {
            printf("      ERROR: Value must be between %d and %d\n", MinImp, MaxImp);
            printf("   How important is it to you? [1=must have, 2=important, 3=want]: ");
            scanf(" %d", &ImpLevel[i]);
        }

        printf("   Does this item have financing options? [y/n]: ");
        scanf(" %c", &finance[i]);

        while (!(finance[i] == 'y' || finance[i] == 'n'))
        {
            printf("      ERROR: Must be a lowercase 'y' or 'n'\n");
            printf("   Does this item have financing options? [y/n]: ");
            scanf(" %c", &finance[i]);
        }
    }

    printf("\nItem Priority Financed        Cost\n");
    printf("---- -------- -------- -----------\n");

    for (i = 0; i < Items; i++)
    {

        printf("%3d  %5d    %5c    %11.2lf\n", i + 1, ImpLevel[i], finance[i], ItemsCost[i]);
    }

    printf("---- -------- -------- -----------\n");
    printf("                      $%11.2lf\n\n", TotalCost);

 

    do
    {

       
        printf("How do you want to forecast your wish list?\n");
        printf(" 1. All items (no filter)\n");
        printf(" 2. By priority\n");
        printf(" 0. Quit/Exit\n");
        printf("Selection: ");
        scanf(" %d", &selection);

        if (selection == 1)
        {
            allMonth = (int)TotalCost / Income;
            year = (int)(allMonth + 1) / 12;
            month = (int)(allMonth + 1) % 12;

            printf("\n====================================================\n");
            printf("Filter:   All items\n");
            printf("Amount:   $%1.2lf\n", TotalCost);
            printf("Forecast: %d years, %d months\n", year, month);

            for (i = 0; i < Items; i++)
            {
                if (finance[i] == 'y')
                {
                    financeOption = 1;
                }
            }
                if (financeOption == 1)
                {
                    printf("NOTE: Financing options are available on some items.\n");
                    printf("      You can likely reduce the estimated months.\n");
                }
            
            printf("====================================================\n\n");
        }

      
        else if (selection == 2) {
         
            sumFilterCost = 0;
            do {
                printf("\nWhat priority do you want to filter by? [1-3]: ");
                scanf("%d", &priority);
                if (priority < 1 || priority > 3) {
                    printf("ERROR: Value must be between 1 and 3\n");
                }
               
            } while (priority < 1 || priority > 3);
            
            for (i = 0; i < Items; i++) {
                if (ImpLevel[i] == priority) {
                    sumFilterCost += ItemsCost[i];
                }
            }
            allMonth = (int)sumFilterCost / Income;
            year = (int)(allMonth + 1) / 12;
            month = (int)(allMonth + 1) % 12;
           
            note = 0;

            for (i = 0; i < Items; i++)
            {
               if (finance[i] == 'y' && ImpLevel[i] == priority)
               {
                    note = 1;
               }
            }
            

            if (note !=0)
            {

            
                printf("\n====================================================\n");
                printf("Filter:   by priority (%d)\n", priority);
                printf("Amount:   $%1.2lf\n", sumFilterCost);
                printf("Forecast: %d years, %d months\n", year, month);
                
             
                
                printf("NOTE: Financing options are available on some items.\n");
                printf("      You can likely reduce the estimated months.\n");
            }

            else
            {
                printf("\n====================================================\n");
                printf("Filter:   by priority (%d)\n", priority);
                printf("Amount:   $%1.2lf\n", sumFilterCost);
                printf("Forecast: %d years, %d months\n", year, month);
            }

          
            printf("====================================================\n\n");
        }
                      

        else if (selection!=0)
        {
            printf("\nERROR: Invalid menu selection.\n\n");
        }
       
    } while (!(selection == 0));
   
    
    
    printf("\nBest of luck in all your future endeavours!\n");
    return 0;
}
