/*
programme for electricity bill calculator 
author:kelvin muchoki
registration number:CT101/G/25008/24
date:03/10/2024
*/
// preprocessor directive
#include<stdio.h>

int main()
{
char customerID[20];
char customerName[20];
float unit_consumed;
float charge_per_unit;
float surcharge;
float total_bill;
int lowestbill= 100;

printf("enter the customer ID:");
scanf("%s",&customerID);
printf("enter the customer name:");
scanf("%s",&customerName);
printf("enter the units consumed:");
scanf("%f",&unit_consumed);

if(unit_consumed<=199){
charge_per_unit=1.20;
total_bill=unit_consumed*charge_per_unit;
}
else if((unit_consumed>=200) && (unit_consumed<400)){
charge_per_unit=1.50;
total_bill=unit_consumed*charge_per_unit;
}
else if((unit_consumed>=400) && (unit_consumed<600)){
charge_per_unit=1.80;
total_bill=unit_consumed*charge_per_unit;
}
else{
charge_per_unit=2.00;
total_bill=unit_consumed*charge_per_unit;
}
if (total_bill<100)
{total_bill=lowestbill;}
printf("\nthe total bill is:%.2f",total_bill);
if(total_bill>400){
surcharge=0.15;
total_bill=total_bill+total_bill*surcharge;
}

printf("\nthe customer ID is:%s",customerID);
printf("\nthe customer name is:%s",customerName);
printf("\nthe units consumed is:%.2f",unit_consumed);
printf("\nthe charge per unit is:%.2f",charge_per_unit);
printf("\nthe total bill is:%.2f",total_bill);

    return 0;
}