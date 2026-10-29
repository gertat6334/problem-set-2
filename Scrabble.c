#include <ctype.h>
#include <stdio.h>

int p[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int score(char w[])
{
    int s = 0;
    for (int i = 0; w[i] != '\0'; i++)
    {
        if (isupper(w[i]))
            s += p[w[i] - 'A'];
        if (w[i] >= 'a' && w[i] <= 'z')
            s += p[w[i] - 'a'];
    }
    return s;
}

int main(void)
{
    char a[100], b[100];
    printf("Игрок 1: ");
    scanf("%99s", a);
    printf("Игрок 2: ");
    scanf("%99s", b);
    if (score(a) > score(b))
        printf("Игрок 1 победил!\n");
    if (score(a) < score(b))
        printf("Игрок 2 победил!\n");
    if (score(a) == score(b))
        printf("Ничья!\n");
}