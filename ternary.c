#include<stdio.h>
int main()
{
    int age;
    printf("enter the age :");
    scanf("%d", &age);

    age >= 21 ? printf("adult \n") : printf("not adult \n");
    return 0;
    
}