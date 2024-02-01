#include<stdio.h>

int main()
{
    float x1,y1,x2,y2,x3,y3;
    printf("Enter the first co-ordinate: ");
    scanf("%f%f",&x1,&y1);
    printf("Enter the second co-ordinate: ");
    scanf("%f%f",&x2,&y2);
    printf("Enter the third co-ordinate: ");
    scanf("%f%f",&x3,&y3);
    if(((y3-y2)/(x3-x2))==((y2-y1)/(x2-x1)))
        printf("They form a straight line");
    else
        printf("They dont form a straight line");
    
    return 0;
}