#include<stdio.h>
#include<stdlib.h>

#define ERR_NOTFOUND -1

typedef struct Node
{
    int data;
    struct Node *next;
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));         // 1

    newn->data = no;                            // 2
    newn->next = NULL;

    if(*Head == NULL)                           // 3
    {
        *Head = newn;                           // 4
    }
    else
    {
        newn->next = *Head;                     // 5
        *Head = newn;                           // 6
    }
}

void Display(PNODE Head)
{
    printf("Elements of LinkedList are : \n");

    while(Head != NULL)
    {
        printf("| %d | -> ",Head->data);
        Head = Head -> next;
    }
    printf("NULL \n");
}

int SearchFirstOcc(PNODE Head,int iNo)
{
    int iCnt=0;
    iNo=Head->data;


    while(Head!=NULL)
    {
        for(iCnt=1;iCnt<=Head->data;iCnt++)
        {
            if(iCnt==iNo)
            {
                Head->data=iNo;
                break;
            }
          return iNo;

        }
        Head=Head->next;
               
    }
  }

int main()
{
    PNODE First = NULL;
    int iValue=0;
    int iRet=0;

    InsertFirst(&First,111);
    InsertFirst(&First,496);
    InsertFirst(&First,28);
    InsertFirst(&First,6);
    InsertFirst(&First,11);

    Display(First);
    iRet=SearchFirstOcc(First,iValue);  

    printf("Enter the element that you want to search:\n");
    scanf("%d",&iValue); 
   
    printf("%d is ooccured at index %d\n",iValue,iRet);
    return 0;
}