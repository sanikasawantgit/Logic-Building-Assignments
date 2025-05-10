// Code to print * on screen by taking the number input from user
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    iCnt = 1;
    
    while(iCnt <= iNo)
    {
        printf("*\n");
        iCnt++;
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number: ");
    scanf("%d", &iValue);
    
    Display(iValue);
    
    return 0;
}