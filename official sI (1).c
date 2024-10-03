/*
programme to find simple interest 
author:kelvin muchoki
registration number:CT101/G/25008/24
date:29/9/2024
*/
#include <stdio.h>

int main() {
    float principal;
    float rate;
    float time;
    

    printf("Enter the principal amount:");
    scanf("%f", &principal);

    printf("Enter the rate of interest:");
    scanf("%f", &rate);

    printf("Enter the time (in years):");
    scanf("%f", &time);
    
   float simpleInterest=(principal*rate*time)/100;
    printf("Simple Interest = %.2f\n", simpleInterest);

    return 0;
}