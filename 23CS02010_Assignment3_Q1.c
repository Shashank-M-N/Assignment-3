#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n>0)
        printf("Its a positive number");
    else if (n<0)
        printf("its a negative number");
    else
        printf("Its zero");

    return 0;    
}