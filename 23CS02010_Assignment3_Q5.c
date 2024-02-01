#include<stdio.h>

int main()
{
    int n;
    printf("Enter for how many days is the book not returned: ");
    scanf("%d",&n);
    if(n<=5)
        printf("the fine is %d rupees", n);
    else if(n<=10)
        printf("the fine is %d rupees",(5+(n-5)*2));
    else if(n<=30)
        printf("the fine is %d rupees",(15+(n-10)*5));
    else
        printf("Your membership is canceled");        

    return 0;
}