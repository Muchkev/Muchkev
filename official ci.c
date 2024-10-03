/*
programme to find compound interest 
author:kelvin muchoki
registration number:CT101/G/25008/24
date:02/10/2024
*/
// preprocessor directive 
#include <stdio.h>
#include <math.h>

int main() {
    float principal;
    float rate;
    float time;
    int n;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the annual rate of interest (in percentage): ");
    scanf("%f", &rate);

    printf("Enter the time (in years): ");
    scanf("%f", &time);

    printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &n);
    
    float ci=principal*pow((1+(rate/100)/n),n*time)-principal;
    printf("the compound interest is :%.2f",ci);
    
    return 0;
}