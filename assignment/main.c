//Assignment
#include <stdio.h>
#include <stdlib.h>
#define years 2
#define months 2
void input_data();
void avg_rf_10yrs();
void display();
void avg_evry_month();
float rainfall[years][months];
int main()
{
    input_data();
    display();
    avg_rf_10yrs();
    avg_evry_month();
    getch();
}
void input_data()
{
    int i,j;

    printf("\nenter data");
        for(i=0;i<years;i++)
        {
            for(j=0;j<months;j++)
                scanf("%f",&rainfall[i][j]);
        }
}

void avg_rf_10yrs()
{
    float avg,sum=0;
    int i,j;
     for(i=0;i<years;i++)
        {
            for(j=0;j<months;j++)
            {
                sum=sum+rainfall[i][j];
                avg=sum/10;
            }
        }
        printf("\nAverage rainfall of 10 years =%f",avg);
}

void display()
{
    int i,j;
    for(i=0;i<years;i++)
        {
            for(j=0;j<months;j++)
                printf("%.2f\t",rainfall[i][j]);
        }
}

void avg_evry_month()
{
    int i,j;
    float avg,sum=0;
    for(j=0;j<months;j++)
    {


            sum=sum+rainfall[j][0];

    }
    avg=sum/12;
    printf("\nAverage of 1st month = %f",avg);
}
