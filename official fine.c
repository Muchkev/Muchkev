/*
programme to fine rate and amount
author:kelvin muchoki
registration number:CT101/G/25008/24
date:03/10/2024
*/
// preprocessor directive 
#include<stdio.h>
int main (){
int bookID;
int dueDate;
int returnDate;
int fineRate;
int fineAmount; 

printf("enetr book ID:");
scanf("%d",&bookID);
printf("enter your due date:");
scanf("%d",&dueDate);
printf("enter your return date:");
scanf("%d",&returnDate);

int daysOverdue=returnDate-dueDate;
printf ("over due is %d",daysOverdue);
if (daysOverdue<=7){
 fineRate=20;
 fineAmount=fineRate*daysOverdue;
printf("\nthe fine amount is: %d",fineAmount);}
else if(daysOverdue<=14){
  fineRate=50;
  fineAmount=fineRate*daysOverdue;
printf("\nthe fine amount is:%d ",fineAmount);}
else {
  fineRate=100;
  fineAmount=fineRate*daysOverdue;
printf("\nthe fine amount is:%d",fineAmount);}

printf("\nyour book ID is:%d",bookID);
printf("\nyour due date is:%d",dueDate);
printf("\nyour return date is:%d",returnDate);
printf("\nyour days overdue are:%d",daysOverdue);
printf("\nyour fine rate is:%d",fineRate);
printf("\nyour fine amount is:%d",fineAmount);

return 0;
}