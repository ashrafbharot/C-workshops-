/*/////////////////////////////////////////////////////////////////////////
						  Workshop - #8 (P1)
Full Name  : MOHAMED ASHRAF BHAROT
Student ID#: 139539225
Email      : mamabharot@myseneca.ca
Section    : ZEE

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS


// System Libraries
#include <stdio.h>

// User Libraries

#include "w8p2.h"

// 1. Get user input of int type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
int getIntPositive(int* int_ptr) {
	int value;
	int x = 1;// used as flag

	do {
		scanf(" %d", &value);
		if (value <= 0)
		{
			printf("ERROR: Enter a positive value: ");
		}
		else
		{
			x = 0;
		}
	} while (x);

	if (int_ptr != NULL)
	{
		*int_ptr = value;
	}
	else {
		int_ptr = &value;
	}
	return value;
}

// 2. Get user input of double type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
double getDoublePositive(double* double_ptr) {
	double value;
	int x = 1;// used as flag

	do {
		scanf(" %lf", &value);
		if (value <= 0)
		{
			printf("ERROR: Enter a positive value: ");
		}
		else
		{
			x = 0;
		}
	} while (x);

	if (double_ptr != NULL)
	{
		*double_ptr = value;
	}
	else
	{
		double_ptr = &value;
	}
	return value;
}

// 3. Opening Message (include the number of products that need entering)
void openingMessage(const int seq_number) {

	printf("Cat Food Cost Analysis\n");
	printf("======================\n");
	printf("\n");

	printf("Enter the details for %d dry food bags of product data for analysis.\n", MAX_PRODUCTS);
	printf("NOTE: A 'serving' is %dg\n", NUM_GRMS);
	printf("\n");
}

// 4. Get user input for the details of cat food product
struct CatFoodInfo getCatFoodInfo(const int seq_number) {
	struct CatFoodInfo info;

	printf("Cat Food Product #%d\n", seq_number + 1);
	printf("--------------------\n");


	// SKU

	printf("SKU           : ");

	info.sku = getIntPositive(NULL);

	// Price

	printf("PRICE         : $");

	info.prdPrice = getDoublePositive(NULL);

	// Weight
	printf("WEIGHT (LBS)  : ");

	info.prdWeight = getDoublePositive(NULL);
	// Calories
	printf("CALORIES/SERV.: ");

	info.cal = getIntPositive(NULL);

	printf("\n");

	// Returning the struct
	return info;

}

// 5. Display the formatted table header
void displayCatFoodHeader(void)
{
	printf("SKU         $Price    Bag-lbs Cal/Serv\n");
	printf("------- ---------- ---------- --------\n");
}

// 6. Display a formatted record of cat food data
void displayCatFoodData(int sku_number, double* product_price, int calorie_per_serving, double* product_weight_lbs)
{
	printf("%07d %10.2lf %10.1lf %8d\n", sku_number, *product_price, *product_weight_lbs, calorie_per_serving);
}

// ----------------------------------------------------------------------------
// PART-2

// 8. convert lbs: kg (divide by 2.20462)
double convertLbsKg(const double* pounds, double* convertedKg) {

	double poundsToKg = (*pounds) / POUNDS_KG;

	if (convertedKg != NULL)
	{
		*convertedKg = poundsToKg;
	}

	return poundsToKg;
}

// 9. convert lbs: g (call convertKG, then * 1000)
int convertLbsG(const double* pounds, int* convertedG) {

	int poundsToG = ((*pounds) / POUNDS_KG) * 1000;

	if (convertedG != NULL)
	{
		*convertedG = poundsToG;
	}

	return poundsToG;
}

// 10. convert lbs: kg and g
void convertLbs(const double* pounds, double* convertedKg, int* convertedG) {

	double poundsToKg = (*pounds) / POUNDS_KG;
	int poundsToG = ((*pounds) / POUNDS_KG) * 1000;

	if (convertedG != NULL && convertedKg != NULL)
	{
		*convertedG = poundsToG;
		*convertedKg = poundsToKg;
	}
}

// 11. calculate: servings based on gPerServ
double calculateServings(const int servingGrams, const int totalGrams, double* numOfServings) {

	double servings = ((double)totalGrams) / servingGrams;

	if (numOfServings != NULL)
	{
		*numOfServings = servings;
	}

	return servings;
}

// 12. calculate: cost per serving
double calculateCostPerServing(const double* price, const double* numOfServings, double* finalCost) {

	double costPerServing = (*price) / (*numOfServings);

	if (finalCost != NULL)
	{
		*finalCost = costPerServing;
	}

	return costPerServing;
}


// 13. calculate: cost per calorie
double calculateCostPerCal(const double* price, const double* totalCalories, double* finalCalories) {

	double costPerCal = (*price) / (*totalCalories);

	if (finalCalories != NULL)
	{
		*finalCalories = costPerCal;
	}

	return costPerCal;
}

// 14. Derive a reporting detail record based on the cat food product data
struct ReportData calculateReportData(struct CatFoodInfo info) {

	struct ReportData rd;

	// Assigning Values
	rd.sku = info.sku;
	rd.prdPrice = info.prdPrice;
	rd.prdWeightLb = info.prdWeight;
	rd.cal = info.cal;

	// Assigning calculated values
	rd.prdWeightKg = convertLbsKg(&rd.prdWeightLb, &rd.prdWeightKg);
	rd.prdWeightG = convertLbsG(&rd.prdWeightLb, &rd.prdWeightG);
	rd.totalServings = calculateServings(NUM_GRMS, rd.prdWeightG, &rd.totalServings);

	// Total calories
	double totalCalories = rd.cal * rd.totalServings;

	rd.costPerServing = calculateCostPerServing(&rd.prdPrice ,&rd.totalServings, &rd.costPerServing);
	rd.costCal = calculateCostPerCal(&rd.prdPrice, &totalCalories, &rd.costCal);


	// Returning the struct
	return rd;
}

// 15. Display the formatted table header for the analysis results
void displayReportHeader(void)
{
	printf("Analysis Report (Note: Serving = %dg)\n", NUM_GRMS);
	printf("---------------\n");
	printf("SKU         $Price    Bag-lbs     Bag-kg     Bag-g Cal/Serv Servings  $/Serv   $/Cal\n");
	printf("------- ---------- ---------- ---------- --------- -------- -------- ------- -------\n");
}

// 16. Display the formatted data row in the analysis table
void displayReportData(const struct ReportData rd, const int cheapestProduct) {

	printf("%07d %10.2lf %10.1lf %10.4lf %9d %8d %8.1lf %7.2lf %7.5lf", rd.sku, rd.prdPrice, rd.prdWeightLb, rd.prdWeightKg, rd.prdWeightG, rd.cal, rd.totalServings, rd.costPerServing, rd.costCal);
}

// 17. Display the findings (cheapest)
void displayFinalAnalysis(const struct CatFoodInfo info) {
	printf("Final Analysis\n");
	printf("--------------\n");
	printf("Based on the comparison data, the PURRR-fect economical option is:\n");
	printf("SKU:%07d Price: $%5.2lf\n", info.sku, info.prdPrice);
	printf("\n");

	// Ending line
	printf("Happy shopping!\n");
	printf("\n");
}

// ----------------------------------------------------------------------------

// 7. Logic entry point
void start(void)
{
	// Struct Arrays
	struct ReportData rd[MAX_PRODUCTS] = { {0} };
	struct CatFoodInfo info[MAX_PRODUCTS] = { {0} };

	// Declaring variables
	int i, cheap = 0;

	// Printing the opening message
	openingMessage(MAX_PRODUCTS);

	// Filling the cfi array
	for (i = 0; i < MAX_PRODUCTS; i++) {
		info[i] = getCatFoodInfo(i);
		rd[i] = calculateReportData(info[i]);
	}

	// Dsiplaying cat food header
	displayCatFoodHeader();

	// Displaying cat food data
	for (i = 0; i < MAX_PRODUCTS; i++) {
		displayCatFoodData(info[i].sku, &info[i].prdPrice, info[i].cal, &info[i].prdWeight);
	}

	// Determining the cheapest product's sku and price
	double cheapestProductPrice = rd[0].costPerServing;
	for (i = 0; i < MAX_PRODUCTS; i++)
	{
		if (rd[i].costPerServing <= cheapestProductPrice)
		{
			cheapestProductPrice = rd[i].costPerServing;
			cheap = i;
		}
	}
	printf("\n");

	// Displaying the report header
	displayReportHeader();

	// Displaying the report data
	for (i = 0; i < MAX_PRODUCTS; i++)
	{
		displayReportData(rd[i], cheap);

		if (cheap == i)
		{
			printf(" ***\n");
		}
		else
		{
			printf("\n");
		}
	}
	printf("\n");

	// Displaying final analysis
	for (i = 0; i < MAX_PRODUCTS; i++)
	{
		if (i == cheap)
		{
			displayFinalAnalysis(info[i]);
		}
	}
}



