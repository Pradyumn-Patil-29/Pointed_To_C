//////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement: Write program for number is divisible by 3 ans 5.
///////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool Divisible(int iValue)
{
    if((iValue % 3 ==0)&&(iValue % 5==0))
    {
        return true;
    }
    else{
        return false;
    }
}

int main()
{
   int iNo=0;

   printf("Enter number: \n");
   scanf("%d",&iNo);

   bool bRet= false;
   bRet= Divisible(iNo);

   if(bRet==true)
   {
       printf("Number is divisible by 3 &5\n");
   }
   else
   {
       printf("Number is not divisible by 3 or 5\n");
   }

    return 0;
}