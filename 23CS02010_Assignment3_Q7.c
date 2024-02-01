#include<stdio.h>
#include<math.h>

int main()
{
    float m,w;
    int n,k,t;
    printf("Enter the total number of classes attended: ");
    scanf("%d",&n);
    printf("Enter the total number of classes conducted: ");
    scanf("%d",&k);
    printf("Enter the marks obtained: ");
    scanf("%f",&m);
    if(m>=0 && m<=100 && n<=k)
    {
    w=(float)n/k;
    t=(int)round(m*w);
    printf("Final score = %d\n",t);
    t/=10;
    switch (t)
    {
    case 10:printf("Grade = EX");
            break;
    case 9:printf("Grade = EX");
            break;
    case 8:printf("Grade = A");
            break;
    case 7:printf("Grade = B");
            break;
    case 6:printf("Grade = C");
            break;
    case 5:printf("Grade = D");
            break;
    case 4:printf("Grade = D");
            break;
    default:printf("Grade = F");
            break;
    }
    }
    else
        printf("Its not a valid input");
    return 0;
}