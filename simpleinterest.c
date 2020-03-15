#include<stdio.h>
void main()
{
    int p,n,r,si;
    printf("Enter Principle, Rate of interest & Time :");
    scanf("%d%d%d",&p,&r,&n);
    si=(p*r*n)/100;
    printf("Simple Interest is :%d",si);
}
