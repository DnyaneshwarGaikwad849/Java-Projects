#include<stdio.h>

int Difference(char *str)
{
    int iSmallCnt = 0;
    int iCapCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iSmallCnt++;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            iCapCnt++;
        }
        str++;
    }
   return iSmallCnt-iCapCnt;
}

int main()
{
    char Arr[20];
    int iRet=0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet=Difference(Arr);
    
    printf("%d",iRet);
    
    return 0;
}