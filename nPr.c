#include <stdio.h>
int fact(int); 
void main()
{
   int n, r;
   printf("Enter value for n and r\n");
   scanf("%d%d", &n, &r);
   int npr = fact(n) / fact(n - r);
   printf("\n Permutation values is = %d", npr);
}
 
int fact(int x)
{
   if (x <= 1)
       return 1;
   return x * fact(x - 1);
}
