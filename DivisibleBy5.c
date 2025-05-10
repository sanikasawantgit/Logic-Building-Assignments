// Divisible by 5

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL Check(int iNo)         // Function to check the given number is Divisible by 5 or not
{
    if((iNo % 5) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;
    
    printf("Enter number: ");
    scanf("%d", &iValue);
    
    bRet = Check(iValue);
    
    if(bRet == TRUE)
    {
        printf("Divisible by 5\n");
    }
    else
    {
        printf("Not Divisible by 5\n");
    }
    
    return 0;
}