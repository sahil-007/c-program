#include <stdio.h>
 void main()
{
    char operator;
    float num1, num2, result;
  
    printf("Enter two numbers \n");
    scanf("%f %f", &num1, &num2);
    printf("Enter the operator\n");
    scanf("%s", &operator);
    
    switch(operator)
    {
     case '+':result = num1 + num2;
              break;
     case '-':result = num1 - num2;
              break;
     case '*':result = num1 * num2;
              break;
     case '/':result = num1 / num2;
              break;
     default :printf("Operator not found");
             break;
    }
    printf("\n %f %c %f = %f\n", num1, operator, num2, result);
}
