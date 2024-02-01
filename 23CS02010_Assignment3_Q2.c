#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter 3 number: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
        if(a>c)
            printf("%d is the largest among all",a);
        else
            printf("%d is the largest among all",c);
    else
        if(b>c)
            printf("%d is the largest among all",b);
        else
            printf("%d is the largest among all",c);
    
    return 0;
}