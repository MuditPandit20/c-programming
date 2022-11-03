#include<stdio.h>
int main()
{
    int a,b,c,code;
    printf("Enter two number");
    scanf("%d%d",&a,&b,&c);
    printf("Enter code");
    scanf("%d",&code);
    switch (code)
    {
    case 1: c=a+b;
    printf("%d",c);
        break;
    case 2: c=a-b;
    printf("%d",c);
        break;
    case 3: c=a*b;
    printf("%d",c);
        break;
    case 4: c=a/b;
    printf("%d",c);
        break;
    case 5: c=a%b;
    printf("%d",c);
        break;
    default:
        break;
    }

}