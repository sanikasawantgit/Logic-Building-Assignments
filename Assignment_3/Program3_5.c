// Code to accept one character from user and print if it is vowel or not
#include <stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char cChar)
{
    if(cChar == 'a' || cChar == 'e' || cChar == 'i' || cChar == 'o' || cChar == 'u' ||
       cChar == 'A' || cChar == 'E' || cChar == 'I' || cChar == 'O' || cChar == 'U')
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
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter Character: ");
    scanf(" %c", &cValue);  

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is a Vowel.\n");
    }
    else
    {
        printf("It is not a Vowel.\n");
    }

    return 0;
}
