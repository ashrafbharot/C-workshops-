/* /////////////////////////////////////////////////////////////////////////
                          Workshop - #2 (P1)
Full Name  :MOHAMED ASHRAF BHAROT
Student ID#:139539225
Email      :mamabharot@myseneca.ca
Section    :ZEE
Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
///////////////////////////////////////////////////////////////////////// */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    const double TAX = 0.13;
    const char patSize = 'S';
    double Scost;
    double Mcost;
    double Lcost;
    int NoShirts;

    printf("Set Shirt Prices\n");
    printf("================\n");

    printf("Enter the price for a SMALL shirt: $");
    scanf(" %lf", &Scost);

    printf("Enter the price for a MEDIUM shirt: $");
    scanf(" %lf", &Mcost);

    printf("Enter the price for a LARGE shirt: $");
    scanf(" %lf", &Lcost);

    printf("\nShirt Store Price List\n");
    printf("======================\n");

    printf("SMALL  : $%.2lf\n",Scost);
    printf("MEDIUM : $%.2lf\n",Mcost);
    printf("LARGE  : $%.2lf\n\n",Lcost);

    printf("Patty's shirt size is '%c'\n", patSize);

    printf("Number of shirts Patty is buying: ");
    scanf(" %d", &NoShirts);

    int Subtotal = NoShirts * (Scost*100);
    int Taxes = (Subtotal * TAX)+0.5;
    int Total = Subtotal + Taxes;
    
    
    printf("\nPatty's shopping cart...\n");
    printf("Contains : %d shirts\n", NoShirts);

    printf("Sub-total: $%8.4lf\n",(double)Subtotal);
    
    printf("Taxes    : $%8.4lf\n",(double)Taxes/100);

    printf("Total    : $%8.4lf\n",(double)Total/100);
    return 0;
}