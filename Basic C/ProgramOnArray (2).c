#include<stdio.h>
#include<stdlib.h>


int main()
{
    int Arr[5];
    int iCnt=0;
    printf("enter the elemets:\n");
    for (iCnt = 0; iCnt < 5; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    printf("Elment from array are:\n");

    for(iCnt=0;iCnt<5;iCnt++)
    {
        printf("%d\t",Arr[iCnt]);
    }
    return 0;
    
}