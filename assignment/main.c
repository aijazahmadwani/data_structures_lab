/*
Author: AIJAZ AHMAD WANI
IMCA 2nd SEM
aijazahmad9864@gmail.com
*/
#include <stdio.h>
#include <stdlib.h>
#define months 4
#define years 2
int rainfall[years][months];
int arey[years];
int arem[months];
int i,j,a,sum,max;
int avg;
void menu();
void display();
void avg_rainfall_each_year();
void avg_rainfall_every_month();
void heighest_avg_rainfall_decade();
void heighest_avg_rainfall_of_month();
void calculation();
void data();
int main()
{

    int choice;
    data();
    calculation();
    while(1)
    {

    system("cls");
    menu();
    printf("\nEnter your choice :");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        display();
        break;
    case 2:
        avg_rainfall_each_year();
        break;
    case 3:
        avg_rainfall_every_month();
        break;
    case 4:
        heighest_avg_rainfall_decade();
        break;
    case 5:
         heighest_avg_rainfall_of_month();
        break;
    case 6:
        exit(0);
    default :
        printf("\nInvalid choice..........Try again");
    }
    getch();
    }
    return 0;
}

void menu()
{
    printf("\n1. Display Rainfall Array");
    printf("\n2. Display average rainfall of %d years",years);
    printf("\n3. Average rainfall of every month over a period of %d years",years);
    printf("\n4. Highest average rainfall in %d years",years);
    printf("\n5. Highest average rainfall of month over last %d years",years);
    printf("\n6. Exit");
    printf("\n\n\n\n*******************************************************");
}

void display()
{
    printf("\tRainfall Array\n\n");
   for(i=0;i<years;i++)
   {
       for(j=0;j<months;j++)
        {
            printf("%d\t",rainfall[i][j]);
        }
    printf("\n");
   }
}

void avg_rainfall_each_year()
{
    printf("\nAverage rainfall of each year\n\n\n");
    for(i=0;i<years;i++)
        printf("Average rainfall of %d year = %d\n",i+1,arey[i]);
}

void heighest_avg_rainfall_decade()
{
    int p;
    max=arey[0];
    for(i=1;i<years;i++)
    {
        if(arey[i]>max)
            max=arey[i];
            p=i;

    }
    printf("\nHighest avg. rainfall of decade = %d in year %d",max,p+1);
}

void avg_rainfall_every_month()
{
    printf("\nAverage rainfall of every month over a period of %d years\n\n\n",years);
    for(i=0;i<months;i++)
        printf("\nAverage rainfall of %d month = %d",i+1,arem[i]);
}

void heighest_avg_rainfall_of_month()
{
    int p;
    max=arem[0];
    for(i=1;i<months;i++)
    {
        if(arem[i]>max)
        {
            max=arem[i];
            p=i;
        }
    }
    printf("\nHighest average rainfall of month over last decade = %d of %d month",max,p+1);
}

void data()
{
    printf("\nEnter data \n");
    for(i=0;i<years;i++)
    {
        for(j=0;j<months;j++)
        {
            scanf("%d",&rainfall[i][j]);
        }
    }
}
void calculation()
{

//average rainfall of each year
        for(i=0;i<years;i++)
    {
        for(j=0;j<months;j++)
        {
            sum=sum+rainfall[i][j];
        }
        avg=0;
        avg=sum/months;
        arey[a]=avg;
        a++;
        sum=0;
    }


//average rainfall of every month
            sum=0,a=0;
    for(i=0;i<months;i++)
    {
        for(j=0;j<years;j++)
        {
            sum=sum+rainfall[j][i];
        }
        avg=0;
        avg=sum/years;
        arem[a]=avg;
        a++;
        sum=0;

    }
}
