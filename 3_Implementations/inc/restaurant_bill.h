#ifndef RESTAURANT_BILL_H_INCLUDED
#define RESTAURANT_BILL_H_INCLUDED
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
double price[7] = {15.00 , 60.00 , 30.00 , 15.00 , 40.00 , 15.00 , 20.00 };
double mealTaxPrices[7];
int adultNumber,childNumber;
void printBreakfast();
void orderBreakfast();
double orderForAdult();
double orderForChildren();


#endif // RESTAURANT_BILL_H_INCLUDED
