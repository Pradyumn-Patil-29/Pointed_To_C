// display count of even & Odd digits in a number.
/*
input: 751
output: odd 3  even 0

input: 72
output:odd 1  even 1

*/

#include<stdio.h>

void DisplayEvenOddDigits(int iNo)
{
   int iEvenCnt=0;
   int iOddcnt=0;
   int iDigit=0;
   
   while(iNo==0)   
   {
     printf("Odd numbers are: 0\n");
     printf("even number are: 1\n");
     return;
   }
   while(iNo!=0)
   {
     iDigit=iNo % 10;

     if(iDigit%2==0)
     {
        iEvenCnt++; 
     }
     else
     {
        iOddcnt++;  
     }

     iNo=iNo / 10;   
   }
   printf("Odd numbers are: %d\n",iEvenCnt);
   printf("even number are:%d\n",iOddcnt);
}
int main()
{
    int iValue=0;
    
    printf("Please eneter number : \n");
    scanf("%d", &iValue);
    
    DisplayEvenOddDigits(iValue);
    
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