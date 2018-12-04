#include <stdio.h>
#include <stdlib.h>
#define max 2
int queue[max];
int front=-1,rear=-1;
void insert();
void delete();
void display();

int main()
{
    while(1)
    {
        system("cls");
    int choice;
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
        break;
    default:
        printf("\nInvalid input.....Try again");
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
    if(rear==max-1)
    {
        printf("Queue is full");
    return;
    }
    else if(front==-1&&rear==-1)
        front=0,rear=0;
    else
        rear++;
    printf("\nEnter element to insert : ");
    scanf("%d",&ele);
    queue[rear]=ele;
    printf("%d inserted",ele);
    return;
}

void delete()
{
    int ele;
    ele=queue[front];
    if(front==-1&&rear==-1)
    {
        printf("Queue is empty");
        return;
    }
    else if(rear==front)
        front=-1,rear=-1;
    else
    {
        front++;
    }
    printf("%d deleted",ele);
}

void display()
{
    int i;
    if(front==-1&&rear==-1){
        printf("Queue is empty");
    return;
    }
    for(i=front;i<=rear;i++)
        printf("%d\t",queue[i]);

}
