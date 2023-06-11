/*
problem statement:
check whether the number is palindrom is not

input=151
output= number is palindrom

input= 542
output= number is not palindrom
*/
#include<stdio.h>
#include<stdbool.h>

bool Palindrom(int iNo)
{
    int iDigit=0;
    int iRev=0;
    int iTemp=iNo;

    while (iNo!=0)
    {
        iDigit=iNo%10;
        iRev=(iRev*10)+iDigit;
        iNo=iNo/10;
    }
    if(iRev==iTemp)
    {
        return true;
    }
    else{
        return false;
    }

}
int main()
{
    int iValue=0;bool iRet=false;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet=Palindrom(iValue);
    if(iRet==true)
    {
        printf("number  is Palindrom %d\n",iValue);
    }
    else
    {
        printf("number is not palindrom %d\n",iValue);
    }
    return 0;
}