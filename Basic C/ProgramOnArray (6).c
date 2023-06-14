/*
problem statement:
Accept N numbers and count even numbers in them

input:1 2 3 4 5 6
Output:2 4 6
*/

////////TEMPLATE APLLICATION///////////

#include<stdio.h>
#include<stdlib.h>

int____(int Arr[],int iSize)
{

}
int main()
{
   int *ptr= NULL;
   int iLength=0,i=0,iRet=0;

   Printf("Enter the numbr of elements");
   scanf("%d",&iLength);

   ptr=(int*)malloc(iLength*sizeof(int));

   printf("Enter the nuumber of elements:\n");

   for(i=0;i<iLength;i++)
   {
    scanf("%d",&ptr[i]);
   }
   iRet=____(ptr,iLength);

   free(ptr);
    return 0;
}