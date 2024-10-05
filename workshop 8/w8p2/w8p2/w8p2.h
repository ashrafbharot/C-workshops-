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
#define POUNDS_KG 2.20462

struct CatFoodInfo {
    int sku;
    double prdPrice;
    int cal;
    double prdWeight;
};
struct ReportData
{
    int sku;
    double prdPrice;
    int cal;
    double prdWeightLb;
    double prdWeightKg;
    int prdWeightG;
    double totalServings;
    double costPerServing;
    double costCal;
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

// ----------------------------------------------------------------------------
// PART-2

// 8. convert lbs: kg
double convertLbsKg(const double* pounds, double* convertedKg);

// 9. convert lbs: g
int convertLbsG(const double* pounds, int* convertedG);

// 10. convert lbs: kg / g
void convertLbs(const double* pounds, double* convertedKg, int* convertedG);

// 11. calculate: servings based on gPerServ
double calculateServings(const int servingGrams, const int totalGrams, double* numOfServings);

// 12. calculate: cost per serving
double calculateCostPerServing(const double* price, const double* numOfServings, double* finalCost);

// 13. calculate: cost per calorie
double calculateCostPerCal(const double* price, const double* calories, double* finalCalories);

// 14. Derive a reporting detail record based on the cat food product data
struct ReportData calculateReportData(struct CatFoodInfo info);

// 15. Display the formatted table header for the analysis results
void displayReportHeader(void);

// 16. Display the formatted data row in the analysis table
void displayReportData(const struct ReportData rd, const int cheapestProduct);

// 17. Display the findings (cheapest)
void displayFinalAnalysis(const struct CatFoodInfo info);

// ----------------------------------------------------------------------------

// 7. Logic entry point 
void start(void);