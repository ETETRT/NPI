#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void finder()
{
    float x, y;
    printf("Введите первое число:");
    scanf("%f", &x);

    printf("Введите второе число:");
    scanf("%f", &y);

    float res1 = (pow(x, 3) + pow(y, 3))/2;
    float res2 = sqrt(abs(x) * abs(y));

    printf("Среднее арифметическое кубов:%f\n", res1);
    printf("Среднее арифметическое модулей:%f\n", res2);
    
    int ans;
    printf("Вернуться в меню?(1/0):");
    scanf("%i", &ans);

    if (ans == 1)
    {
        finder();
    }
}

int main()
{
    setlocale(LC_ALL, "");
    
    finder();

    return 0;
}