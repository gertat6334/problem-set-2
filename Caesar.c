#include <ctype.h>
#include <stdio.h>

int main(void)
{
    int k;
    char t[1000];
    printf("Ключ: ");
    scanf("%i", &k);
    printf("Текст: ");
    scanf(" %999[^\n]", t);
    for (int i = 0; t[i] != '\0'; i++)
    {
        if (isupper(t[i]))
            t[i] = (t[i] - 'A' + k) % 26 + 'A';
        if (t[i] >= 'a' && t[i] <= 'z')
            t[i] = (t[i] - 'a' + k) % 26 + 'a';
    }
    printf("%s\n", t);
}