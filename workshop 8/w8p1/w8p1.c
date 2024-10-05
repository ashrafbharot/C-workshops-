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

#include "w8p1.h"

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

// 7. Logic entry point
void start(void)
{
	int i;
	struct CatFoodInfo info[MAX_PRODUCTS] = { {0} };
	openingMessage(MAX_PRODUCTS);

	for (i = 0; i < MAX_PRODUCTS; i++) {
		info[i] = getCatFoodInfo(i);
	}

	displayCatFoodHeader();

	for (i = 0; i < MAX_PRODUCTS; i++) {
		displayCatFoodData(info[i].sku, &info[i].prdPrice, info[i].cal, &info[i].prdWeight);
	}

}