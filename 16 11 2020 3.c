#include <stdio.h>
 
// описание
void hello();
 
int main(void)
{
    hello();
    hello();
    return 0;
}
 
// определение
void hello()
{
    printf("Hello!\n");
}
