#pragma once
/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #8 (P1)
Full Name  :MOHAMED ASHRAF BHAROT
Student ID#: 139539225
Email      : mamabharot@myseneca.ca
Section    : ZEE

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define MAX_PRODUCTS 3
#define NUM_GRMS 64

struct CatFoodInfo {
    int sku;
    double prdPrice;
    int cal;
    double prdWeight;
};

// ----------------------------------------------------------------------------
// function prototypes

// 1. Get user input of int type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
int getIntPositive(int* int_ptr);

// 2. Get user input of double type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
double getDoublePositive(double* double_ptr);

// 3. Opening Message (include the number of products that need entering)
void openingMessage(const int seq_number);

// 4. Get user input for the details of cat food product
struct CatFoodInfo getCatFoodInfo(const int seq_number);

// 5. Display the formatted table header
void displayCatFoodHeader(void);

// 6. Display a formatted record of cat food data
void displayCatFoodData(int sku_number, double* product_price, int calorie_per_serving, double* product_weight_lbs);

// 7. Logic entry point
void start(void);