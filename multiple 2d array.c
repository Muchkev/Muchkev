//multiple arrays-2d arrays
/*
programme for 2d array 
author:kelvin muchoki
registration number:CT101/G/25008/24
date:16/10/2024
*/
// preprocessor directive
#include<stdio.h>

int main()
{
int i,j;
int marks[2][3]={ {1,2,3},{4,5,6} };

for(i=0;i<2;i++){
for(j=0;j<3;j++){
printf("marks[%d] [%d]=%d\n",i,j,marks[i][j]);
}
}
    return 0;
}