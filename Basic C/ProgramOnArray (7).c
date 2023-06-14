/*
problem statement:
Accept N numbers and count even numbers in them

input:1 2 3 4 5 6
Output:2 4 6
*/

////////TEMPLATE APLLICATION///////////

#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[],int iSize)
{
    int iCnt=0,iEvenCnt=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if((Arr[iCnt]%2)==0)
        {
            iEvenCnt++;
        }
    }
    return iEvenCnt;
   
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
   printf("Count is:%d",iRet);

   free(ptr);
   return 0;
}