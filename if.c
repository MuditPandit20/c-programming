#include<stdio.h>
int main()
{
    int age;
    printf("enter age : ");
    scanf("%d", &age);
    if (age > 18)
    {
        printf("adult \n");
        printf("they can drive \n");
        printf("they can vote \n");
        printf("They can apply for private job and government job");
       
    }
    else
    {
        printf("not adult \n");
        printf("they can not give the vote \n");
    }
    return 0;
}