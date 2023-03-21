#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Prints _putchar, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char c = '_';

    write(1, &c, 1);
    c = 'p';
    write(1, &c, 1);
    c = 'u';
    write(1, &c, 1);
    c = 't';
    write(1, &c, 1);
    c = 'c';
    write(1, &c, 1);
    c = 'h';
    write(1, &c, 1);
    c = 'a';
    write(1, &c, 1);
    c = 'r';
    write(1, &c, 1);
    c = '\n';
    write(1, &c, 1);

    return (0);
}
