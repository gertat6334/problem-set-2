#include <ctype.h>
#include <stdio.h>

int main(void)
{
    char t[1000];
    int l = 0, w = 1, s = 0;
    printf("Текст: ");
    scanf(" %999[^\n]", t);
    for (int i = 0; t[i] != '\0'; i++)
    {
        if (isupper(t[i]) || (t[i] >= 'a' && t[i] <= 'z'))
            l++;
        if (t[i] == ' ')
            w++;
        if (t[i] == '.' || t[i] == '!' || t[i] == '?')
            s++;
    }
    int g = 0.0588 * l * 100.0 / w - 0.296 * s * 100.0 / w - 15.8 + 0.5;
    printf("Класс: %i\n", g);
}