#include<stdio.h>

void DisplayF(int iNo)
{
    int iCnt = 0;

    iCnt = 1;   //counter initialisation
    while(iCnt <= iNo)  //condition of loop
    {
        printf("%d\t",iCnt); //Loop body 
        iCnt++;     //Displacement of loop

    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayF(iValue);

    return 0;
}

/*
    iNo = 5;
    
    5!
    
    Factorial = 5 * 4 * 3 * 2 * 1   = 120

    Factorial = 1 * 2 * 3 * 4 * 5   = 120

*/