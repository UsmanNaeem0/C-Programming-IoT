#include<stdio.h>
#include<conio.h>

void main() {
    int customerID, customerUnits;
    float charge, surcharge = 0, grandAmount, netAmount;
    char customerName[30];

    printf("Welcome To K-Electric \n");

    printf("Enter the Customer ID: \n");
    scanf("%d",&customerID);
    printf("Enter the Customer Units: \n");
    scanf("%d",&customerUnits);
    printf("Enter the Customer Name: \n");
    scanf("%s",&customerName);

    if(customerUnits < 200) {
        charge = 1.20;
    }
    else if(customerUnits >= 200 && customerUnits < 400) {
        charge = 1.50;
    }
    else if(customerUnits >= 400 && customerUnits < 600) {
        charge = 1.80;
    }
    else{
        charge = 2.00;
    }

    grandAmount = customerUnits * charge;

    if(grandAmount > 400) {
        surcharge = grandAmount * 15 / 100.0;
    }

    netAmount = grandAmount + surcharge;

    printf("The Total Amount is: %f \n",netAmount);
}