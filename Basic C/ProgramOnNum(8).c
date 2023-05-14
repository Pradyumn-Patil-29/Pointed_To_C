// display no of digits in a number.
/*
input: 751
output:3

input: 72
output: 2

*/

#include<stdio.h>

int CountDigits(int iNo)
{
   //code
   return 0;
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Please eneter number : \n");
    scanf("%d", &iValue);
    
    iRet=CountDigits(iValue);
    printf("Number of digits are : %d\n",iRet);


    return 0;
}