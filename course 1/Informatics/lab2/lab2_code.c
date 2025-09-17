#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void finder()
{
    FILE *xy, *res;
    int x, y;

    xy = fopen("inp.txt", "r");
    res = fopen("out.txt", "w");

    fscanf(xy, "%d", &x);
    fscanf(xy, "%d", &y);

    fprintf(res, "%f\n", (pow(x, 3) + pow(y, 3))/2);
    fprintf(res, "%f", sqrt(abs(x) * abs(y)));

    fclose(xy);
    fclose(res);

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