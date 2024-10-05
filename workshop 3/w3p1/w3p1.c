/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #3 (P1)
Full Name  :MOHAMED ASHRAF BHAROT
Student ID#:139539225
Email      :mamabharot@myseneca.ca
Section    :ZEE

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#include <stdio.h>

int main(void)
{
    // You must use this variable in #3 data analysis section!
    const double testValue = 330.99;
    const int Pid_1 = 111, Pid_2 = 222, Pid_3 = 111;
    const double Prc_1 = 111.49, Prc_2 = 222.99, Prc_3 = 334.49;
    const char taxed_1 = 'Y', taxed_2 = 'N', taxed_3 = 'N';
    double average;
    average= (Prc_1 + Prc_2 + Prc_3) / 3;
    

    printf("Product Information\n");
    printf("===================\n");
    printf("Product-1 (ID:%d)\n", Pid_1);
    printf("  Taxed: %c\n", taxed_1);
    printf("  Price: $%.4lf\n\n", Prc_1);

    printf("Product-2 (ID:%d)\n", Pid_2);
    printf("  Taxed: %c\n", taxed_2);
    printf("  Price: $%.4lf\n\n", Prc_2);

    printf("Product-3 (ID:%d)\n", Pid_3);
    printf("  Taxed: %c\n", taxed_3);
    printf("  Price: $%.4lf\n", Prc_3);
    
    printf("\nThe average of all prices is: $%.4lf\n\n", average);

    printf("About Relational and Logical Expressions!\n");
    printf("========================================\n");
    printf("1. These expressions evaluate to TRUE or FALSE\n");
    printf("2. FALSE: is always represented by integer value 0\n");
    printf("3. TRUE : is represented by any integer value other than 0\n");

    printf("\nSome Data Analysis...\n");
    printf("=====================\n");
    printf("1. Is product 1 taxable? -> %d\n\n", taxed_1 == 'Y');

    printf("2. Are products 2 and 3 both NOT taxable (N)? -> %d\n\n", taxed_2 == 'N' && taxed_3 == 'N');

    printf("3. Is product 3 less than testValue ($%.2lf)? -> %d\n\n",testValue, Prc_3<testValue);
    
    printf("4. Is the price of product 3 more than both product 1 and 2 combined? -> %d\n\n", Prc_3 > Prc_1 && Prc_3 > Prc_2);

    printf("5. Is the price of product 1 equal to or more than the price difference\n   of product 3 LESS product 2? ->  %d",Prc_1>= Prc_3 - Prc_2);
    printf(" (price difference: $%.2lf)\n\n",Prc_3-Prc_2);

    printf("6. Is the price of product 2 equal to or more than the average price? -> %d\n\n", Prc_2 >=average);

    printf("7. Based on product ID, product 1 is unique -> %d\n\n", (Pid_1 != Pid_2) && (Pid_1 != Pid_3));

    printf("8. Based on product ID, product 2 is unique -> %d\n\n", (Pid_2 != Pid_1) && (Pid_2 != Pid_3));

    printf("9. Based on product ID, product 3 is unique -> %d\n\n", (Pid_3 != Pid_2) && (Pid_3 != Pid_1));
   


    



    return 0;
}