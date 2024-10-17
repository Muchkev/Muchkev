//arrays-3d arrays
/*
programme for electricity bill calculator 
author:kelvin muchoki
registration number:CT101/G/25008/24
date:16/10/2024
*/
// preprocessor directive
#include<stdio.h>

int main()
{
int i,j,k;
int marks[2][2][3]={{ {1,2,3},{4,5,6} },{ {1,2,3},{4,5,6} }};

for(i=0;i<2;i++){
for(j=0;j<3;j++){
for(k=0;k<3;k++){
printf("marks[%d] [%d] [%d]=%d\n",i,j,k,marks[i][j][k]);
}
}
}
    return 0;
}