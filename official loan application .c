/*
programme for loan application 
author:kelvin muchoki
registration number:CT101/G/25008/24
date:02/10/2024
*/
// preprocessor directive 
#include<stdio.h>
int main (){
int age;
float salary;
printf("enter your age");
scanf("%d",&age);
printf ("you are %d years old",age);
printf("\nenter your salary:");
scanf("%f",& salary);
printf("your salary is:%.2f",salary);

if(age>=21 & salary>=21000 ) {printf("\ncongratulations you qualify for a loan");}
else {printf("\nUnfortunately,we are unable to offer you a loan at this time");}

return 0;
}