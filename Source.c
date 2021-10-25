#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main() 
{
    setlocale(LC_ALL, "Rus");
    int N = 0, min = 0, max = 0, M_lock = 0, i = 0, j = 0;
    double sum = 0, mask = 0, a = 0, lot = 0, ryt = 0, b = 0;
    printf("Введите колличество чисел:");
    scanf_s("%d", &N);
    printf("Введите Min:");
    scanf_s("%d", &min);
    printf("Введите Max:");
    scanf_s("%d", &max);
    if ((min > max) || (N < 1)) 
    {
        printf("Недопустимые значения");
        return 0;
    }
    for(i = 0; i < N; i++)
    {
       ryt = rand();
       mask = (ryt / RAND_MAX) * (max - min) + min;
       lot = modf(mask, &b) * 1000000;
       while (j < N)
       {
           if (lot <= N)
           {
               sum -= mask;
               break;
           }
           else
           {
               sum += mask;
               break;
           }
           j++;
       }
    }
printf("Сумма=%lf", sum);
return 0;
}