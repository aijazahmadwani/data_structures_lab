#include <stdio.h>
#include <stdlib.h>
# define max 3
int front=-1,rear=-1;
int queue[max];
int menu();
void insert();
void delete();
void display();
int main()
{
    while(1)
    {
    int choice;
    system("cls");
    choice=menu();
    switch(choice)
    {
    case 1:
        insert();
        break;
    case 2:
        delete();
        break;
    case 3:
        display();
        break;
    case 4:
        exit(0);
    default:
        printf("\n\nInvalid input......Try again");
    }
    getch();
    }
    getch();
}

int menu()
{
    int choice;
    printf("\n1.Insert");
    printf("\n2.Delete");
    printf("\n3.Display");
    printf("\n4.Exit");
    printf("\nEnter your choice : ");
    scanf("%d",&choice);
    return choice;
}

void insert()
{
    int ele;
    if((front==0&&rear==max-1)||(front==rear+1))
    {
        printf("\nQueue is full");
        return;
    }
    if(front==-1&&rear==-1)
        front=0,rear=0;
    else if(rear==max-1)
        rear=0;
    else
        rear++;
    printf("Enter element to insert : ");
    scanf("%d",&ele);
    queue[rear]=ele;
    return;
}

void delete()
{
    if(front==-1&&rear==-1)
    {
        printf("\n Queue is empty");
        return;
    }
    if(front==rear)
        front=-1,rear=-1;
    else if(front==max-1)
        front=0;
    else
        front++;
    printf("\nDeleted successfully");
    return;
}

void display()
{
    int i=front;
    while(i!=rear)
    {
        printf("%d\t",queue[i]);
        if(i==max-1)
        {
            i=0;
        }
        else
        {
            i++;
        }
    }
    if(i==rear)
        printf("%d",queue[i]);
}


