/*
problem statement:
Accept N numbers and count and sum of even and odd numbers in them

input:1 2 3 4 5 6
Output:2 4 6
*/



#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[],int iSize)
{
    int iCnt=0,iEvenCnt=0,iOddCnt=0,iSumEven=0,iSumOdd=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if((Arr[iCnt]%2)==0)
        {
            iSumEven=iSumEven+Arr[iCnt];
            iEvenCnt++;
        }
        else
        {
            iSumOdd=iSumOdd+Arr[iCnt];
            iOddCnt++;
        }
    }
    printf("Count of even number:%d\n",iEvenCnt);
    printf("Sum of even number:%d\n",iSumEven);
    printf("Count off odd number:%d\n",iOddCnt);
    printf("sum of Odd number:%d\n",iSumOdd);
   return (iSumEven+iSumOdd);
}
int main()
{
   int *ptr= NULL;
   int iLength=0,i=0,iRet=0;

   printf("Enter the numbr of elements:\n");
   scanf("%d",&iLength);

   ptr=(int*)malloc(iLength*sizeof(int));

   printf("Enter the nuumber of elements:\n");

   for(i=0;i<iLength;i++)
   {
    scanf("%d",&ptr[i]);
   }
   iRet=CountEven(ptr,iLength);
   printf("total Summation is:%d",iRet);

   free(ptr);
   return 0;
}