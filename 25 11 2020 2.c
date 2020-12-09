#include <stdio.h>
 
int exchange(double rate, double sum)
{
    return sum/rate;
}
 
int main(void)
{
    printf("%d \n", exchange(56.83, 24560));
     
    return 0;
}
