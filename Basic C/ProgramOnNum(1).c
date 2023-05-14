#include<stdio.h>

int main()
{
    int iNo1=0, iNo2=0;

    printf("enter first no: \n");
    scanf("%d",&iNo1);

    printf("Enter second no: \n");
    scanf("%d",&iNo2);

    int iAns= iNo1*iNo2;
    printf("Multiplication is: %d\n",iAns);

    return 0;
}