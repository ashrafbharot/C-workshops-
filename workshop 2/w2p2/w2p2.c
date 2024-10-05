
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
    const char salSize = 'M';
    const char tomSize = 'L';
    double Scost;
    double Mcost;
    double Lcost;
    int NoShirts;
    int NoShirtsSally;
    int NoShirtsTommy;
   
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

    printf("SMALL  : $%.2lf\n", Scost);
    printf("MEDIUM : $%.2lf\n", Mcost);
    printf("LARGE  : $%.2lf\n\n", Lcost);

    printf("Patty's shirt size is '%c'\n", patSize);
    printf("Number of shirts Patty is buying: ");
    scanf("%d", &NoShirts);

    printf("\nTommy's shirt size is '%c'\n", tomSize);
    printf("Number of shirts Tommy is buying: ");
    scanf("%d", &NoShirtsTommy);

    printf("\nSally's shirt size is '%c'\n", salSize);
    printf("Number of shirts Sally is buying: ");
    scanf("%d", &NoShirtsSally);

    int SubPat = NoShirts * (Scost * 100);
    int TaxesPat = (SubPat * TAX) + 0.5;
    int TotalPat = SubPat + TaxesPat;

    int SubSal = NoShirtsSally * (Mcost * 100);
    int TaxesSal = (SubSal * TAX) + 0.5;
    int TotalSal = SubSal + TaxesSal;

    int SubTom = NoShirtsTommy * (Lcost * 100);
    int TaxesTom = (SubTom * TAX) + 0.5;
    int TotalTom = SubTom + TaxesTom;

    int SubTotal = SubPat + SubSal + SubTom;
    int Taxes = TaxesPat + TaxesSal + TaxesTom;
    int Total = TotalPat + TotalSal + TotalTom;
   


    printf("\nCustomer Size Price Qty Sub-Total       Tax     Total\n");
    printf("-------- ---- ----- --- --------- --------- ---------\n");
    printf("Patty    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n", patSize, Scost, NoShirts, (double)SubPat / 100, (double)TaxesPat / 100, (double)TotalPat/100);
    printf("Sally    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n", salSize, Mcost, NoShirtsSally, (double)SubSal / 100, (double)TaxesSal / 100, (double)TotalSal / 100);
    printf("Tommy    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n", tomSize, Lcost, NoShirtsTommy, (double)SubTom / 100, (double)TaxesTom / 100, (double)TotalTom / 100);
    printf("-------- ---- ----- --- --------- --------- ---------\n");
    printf("%33.4lf %9.4lf %9.4lf\n\n", (double)SubTotal / 100, (double)Taxes / 100, (double)Total / 100);

    printf("Daily retail sales represented by coins\n");
    printf("=======================================\n\n");

    

   int tonniestotal = SubTotal/2;
   int tonniesremain = SubTotal % 200;

   int looniestotal = tonniesremain / 1;
   int looniesremain = tonniesremain % 100;

   int quarterstotal =  looniesremain/ 0.25;
   int quartersremain = looniesremain % 25;

   int dimestotal = quartersremain / 0.10;
   int dimesremain= quartersremain % 10;

   int nickelstotal = dimesremain / 0.5;
   int nickelsremain = dimesremain % 5;

   int penniestotal = nickelsremain / 0.01;
   int penniesremain = nickelsremain % 1;
    
    printf("Sales EXCLUDING tax\n");
    printf("Coin     Qty   Balance\n");
    printf("-------- --- ---------\n");
    printf("%22.4lf\n", (double)SubTotal / 100);
    printf("Toonies  %3d %9.4lf\n", tonniestotal / 100, (double)tonniesremain / 100);
    printf("Loonies  %3d %9.4lf\n", looniestotal / 100, (double)looniesremain/ 100);
    printf("Quarters %3d %9.4lf\n", quarterstotal / 100, (double)quartersremain / 100);
    printf("Dimes    %3d %9.4lf\n", dimestotal / 100,    (double)dimesremain / 100);
    printf("Nickels  %3d %9.4lf\n", nickelstotal / 100, (double)nickelsremain / 100);
    printf("Pennies  %3d %9.4lf\n", penniestotal / 100, (double)penniesremain / 100);
   
    double averageSub = (double)SubTotal / (NoShirtsSally+NoShirts+NoShirtsTommy);
      
    printf("\nAverage cost/shirt: $%.4lf\n", averageSub / 100);

    int toonies = Total / 2;
    int tooniesR = Total % 200;

    int loonies = tooniesR / 1;
    int looniesR = tooniesR % 100;

    int quarters = looniesR / 0.25;
    int quartersR = looniesR % 25;
    
    int dimes = quartersR / 0.10;
    int dimesR = quartersR % 10;

    int nickels = dimesR / 0.05;
    int nickelsR = dimesR % 5;
    
    int pennies = nickelsR / 0.01;
    int penniesR = nickelsR % 1;



    printf("\nSales INCLUDING tax\n");
    printf("Coin     Qty   Balance\n");
    printf("-------- --- ---------\n");
    printf("%22.4lf\n", (double)Total / 100);
    printf("Toonies  %3d %9.4lf\n", toonies / 100, (double)tooniesR / 100);
    printf("Loonies  %3d %9.4lf\n", loonies / 100, (double)looniesR / 100);
    printf("Quarters %3d %9.4lf\n", quarters / 100, (double)quartersR / 100);
    printf("Dimes    %3d %9.4lf\n", dimes / 100, (double)dimesR / 100);
    printf("Nickels  %3d %9.4lf\n", nickels / 100, (double)nickelsR / 100);
    printf("Pennies  %3d %9.4lf\n", pennies / 100, (double)penniesR / 100);

    double avrTotal = (double)Total / (NoShirtsSally + NoShirts + NoShirtsTommy);

    printf("\nAverage cost/shirt: $%.4lf\n", avrTotal / 100);




    return 0;
}