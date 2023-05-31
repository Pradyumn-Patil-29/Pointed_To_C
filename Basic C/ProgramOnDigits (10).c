// display count of even digits in a number.
/*
input: 751
output:0

input: 72
output: 1

*/

#include<stdio.h>

int CountEvenDigits(int iNo)
{
   int iCnt=0;
   int iDigit=0;
   
   while(iNo<0)   //updator
   {
    iNo= -iNo;
   }
   while(iNo!=0)
   {
     iDigit=iNo % 10;
     if(iDigit%2==0)
     {
        iCnt++;
     }
     iNo=iNo / 10;
     
   }
   return iCnt;
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Please eneter number : \n");
    scanf("%d", &iValue);
    
    iRet=CountEvenDigits(iValue);
    printf("Count of even digits are : %d\n",iRet);

    return 0;
}
/*
iNo=751

iDigit= iNo % 10                1
iNo=iNo / 10                    75

iDigit= iNo % 10                5
iNo=iNo / 10                    7

iDigit= iNo % 10                7
iNo=iNo / 10                    0

*/