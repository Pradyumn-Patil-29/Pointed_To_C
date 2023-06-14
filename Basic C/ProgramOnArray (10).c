/*
problem:
  accpet n numbers from user and count freqency of number.

input:1 2 2 3 4 5 6 2 3 5
frequency num:2
Output:3
*/



#include<stdio.h>
#include<stdlib.h>

int FrequencyCount(int Arr[],int iSize,int iNo)
{
    int iCnt=0,iFrequency=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            iFrequency++;
        }
    }
    return iFrequency;

}
int main()
{
   int *ptr= NULL;
   int iLength=0,i=0,iRet=0;
   int iValue=0;

   printf("Enter the numbr of elements:\t");
   scanf("%d",&iLength);

   ptr=(int*)malloc(iLength*sizeof(int));

   printf("Enter the nuumber of elements:\n");

   for(i=0;i<iLength;i++)
   {
    scanf("%d",&ptr[i]);
   }

   printf("Enter the element to find out the frequency:\n");
   scanf("%d",&iValue);
   
   iRet=FrequencyCount(ptr,iLength,iValue);
   printf("frequency of %d is %d\n",iValue,iRet);

   free(ptr);
    return 0;
}