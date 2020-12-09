#include <stdio.h>
 
int main(void)
{
    int age;
    char name[10];
    // вводим возраст
    printf("Your age: ");
    scanf("%d", &age);
    // вводим имя
    printf("Your name: ");
    scanf("%10s", &name);
     
    printf("Name: %s \t Age = %d",name,  age);
    return 0;
}
