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
    // ���� ��������� ����� ����������� ������
    printf("Currency rate:");
    scanf("%lf", &rate);
 
    // ���� ����� � ������� ������
    printf("Sum:");
    scanf("%lf", &sum);
 
    // ����� - �������� �������� ����������
    exchange(rate, sum);
     
    // ����� - �������� �������� ��������
    exchange(56.87, 2000);
     
    return 0;
}
