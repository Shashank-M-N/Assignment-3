#include<stdio.h>
#include<math.h>

int main()
{
    int n,s,d=0,t,f=0,a,b;
    printf("Enter the number: ");
    scanf("%d",&n);
    s=n*n;
    t=s;
    while(t)
    {
        d++;
        t/=10;
    }
    for(int i=1;i<d;i++)
    {
        a=s/pow(10,i);
        b=s%(int)round(pow(10,i));
        if(((a+b)==n) && a!=0 && b!=0)
        { 
            f=1;
            break;
        }
    }
    if(f)
        printf("Its a Kaprekar number");
    else
        printf("Its not a Kaprekar number");
    
    return 0;
}