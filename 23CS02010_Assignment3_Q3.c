#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter 3 number (sides of triangle): ");
    scanf("%d%d%d",&a,&b,&c);
    if( (a+b)>c && (a+c)>b && (b+c)>a )
        printf("They are a sides of triangle");
    else
        printf("They dont form a triangle");
    
    return 0;
}