/*do while loop-outnumbers to user friendly 
Registration number:CT101/G/25008/24
Author:Kelvin Muchoki
Date:10/10/2024
*/
#include<stdio.h>

int main()
{
int count;
{printf("Enter the numbers you would like to print:",count);
scanf("%d",&count);}
int i=0,sum=0;
do{
printf("%d \n",i);
i++;
sum=sum+i;
sum+=i;
}
while(i<=count);
printf("the sum is %d",sum);
    return 0;
}