
/*while loop-outnumbers to user friendly 
Registration number:CT101/G/25008/24
Author:Kelvin Muchoki
Date:10/10/2024
*/
#include<stdio.h>

int main()
{
int count;
{printf("Enter the numbers you would like to print:");
scanf("%d",&count);
}
int i=1,sum =0;
while(i<=count){
printf("%d \n",i);
i++;
sum=sum+i;
sum+=i;
}
printf("the sum is %d",sum);
    return 0;
}