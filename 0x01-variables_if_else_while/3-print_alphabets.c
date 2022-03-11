#include <stdio.h>

/**
 * main - print alphabet in lower and uppercase
 *
 *
 * Return: (0) Success
 */
int main(void)
{
    char ch;
    char c;

    for (ch = 'a' ; ch <= 'z' ; ch++)
    {
        putchar(ch);
    }
    for (c = 'A' ; c <= 'Z' ; c++)
    {
        putchar(c);
    }
    putchar('\n');

    return (0);
}
