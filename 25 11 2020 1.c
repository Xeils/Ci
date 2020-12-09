#include <stdio.h>
 
int factorial(int n)
{
    int result = 1;
    for(int i=1;i<=n;i++)
    {
        result *= i;
    }
    return result;
}
int main(void)
{
    int arg,f;
     
    arg = 4;
    f = factorial(arg);
    printf("factorial of %d is equal %d \n", arg, f);
     
    arg = 6;
    f = factorial(arg);
    printf("factorial of %d is equal %d \n", arg, f);
     
    return 0;
}
