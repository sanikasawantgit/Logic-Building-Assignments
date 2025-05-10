// Code to print the * with respect to the index number
#include<stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;

    for( iCnt=1; iCnt<=iNo; iCnt++)
    {
        printf("%d : * \n ", iCnt);
    }

}

int main()
{

    int iValue = 0;
    iValue = 5;

    Accept(iValue);

    return 0;
}