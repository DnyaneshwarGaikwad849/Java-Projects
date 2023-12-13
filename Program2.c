//////////////////////////////////////////////////////////////////////
//
//   Algorithm
//    Understand the problem statement
//    write the algorithm 
//    decide the programming language
//    write the program
//    test the program
//
//////////////////////////////////////////////////////////////////////
//Problem statement: Accept the input from the user 
//and display the additiom of that number

#include<stdio.h>
int main()
{
  int iNo1=10;
  int iNo2=11;
  int Ans=0;

  printf("Enter first number:");
  scanf("%d",&iNo1);

  printf("Enter Second number:");
  scanf("%d",&iNo2);

  
  Ans=iNo1+iNo2;

  printf("Addition is :%d\n",Ans);
  
  return 0;
}




