#include<stdio.h>
void main()
{
    int n,r,ncr;
    printf("Enter N and R values: ");
    scanf("%d %d",&n,&r);
    ncr=fact(n)/(fact(r)*fact(n-r));
    printf("The NCR of %d and %d is %d",n,r,ncr);
}
 

int fact(int x)
{
    int i=1;
    while(x!=0)
    {
        i=i*x;
        x--;
    }
    return i;
}
