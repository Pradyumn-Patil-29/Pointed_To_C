/*
Problem Statement:
Print the largest digit in given number

input: 271
output: 7

input:3195
output: 9
*/

#include<stdio.h>

int MaxDigit(int iNo)
{
    int iDigit=0,iMax=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo!=0)
    {
        iDigit=iNo%10;
        if(iDigit>iMax)
        {
            iMax=iDigit;
        }
        iNo=iNo/10;
    }
    return iMax;
}
int main()
{
    int iValue=0,iRet=0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    iRet=MaxDigit(iValue);

    printf("Largest digit is: %d\n",iRet);
    return 0;
}