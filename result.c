#include<stdio.h>
int main()
{
    int marks;
    printf("enter the marks");
    scanf("%d", &marks);
    if (marks > 85 && marks <= 100)
    {
        printf("you got A+ grade");
    }
    else if (marks > 60 && marks <= 85)
    {
        printf("you got B+ grade");
    }
    else if (marks > 50 && marks <=60)
    {
        printf("you got B grade");
    }
    else if (marks >=33 && marks <= 40)
    {
        printf("you got c grade");
    }
    
    else if (marks > 100)
    {
        printf("invalid result");
    }
    else
    {
        printf("Sorry you are fail");
    }
    
    
}