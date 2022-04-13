#inlude "0-putchar.h"
/**
 * main - Entry point
 * Return:0
 */
int main(void)
{
char c[10] = "0-putchar";
int i = 0;
while (i < 9)
{
_putchar(c[i]);
i++;
}
_putchar('\n');
return (0);
}
