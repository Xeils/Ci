#include <stdio.h>
 
void exchange(double currate, double sum)
{
    double result = sum / currate;
    printf("result=%.2f \n", result);
}
 
int main(void)
{
    double rate;
    double sum;
    // ввод обменного курса иностранной валюты
    printf("Currency rate:");
    scanf("%lf", &rate);
 
    // ввод суммы в текущей валюте
    printf("Sum:");
    scanf("%lf", &sum);
 
    // обмен - передача значений переменных
    exchange(rate, sum);
     
    // обмен - передача числовых констант
    exchange(56.87, 2000);
     
    return 0;
}
