// display given numbber in reverse
/*
input: 751
output:157

input: 72
output:27

*/

#include<stdio.h>

int Reverse(int iNo)
{
   int iDigit=0, iRev=0;
   while(iNo<0)
   {
    iNo= -iNo;
   }
   while(iNo!=0)
   {
    iDigit=iNo%10;
    iRev=(iRev*10)+iDigit;
    iNo=iNo/10;
   }
   return iRev;
}
int main()
{
    int iValue=0,iRet=0;
    
    printf("Please eneter number : \n");
    scanf("%d", &iValue);
    
    iRet= Reverse(iValue);
    printf("reverse number :%d\n",iRet);
    
    return 0;
}
