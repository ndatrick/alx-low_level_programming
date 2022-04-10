#include <stdio.h>
/**
 * main - prints the size of various types
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
print("Size of a char: %d byte(s)\n", sizeof(char));
print("Size of an int: %d byte(s)\n", sizeof(int));
print("Size of a long int: %d byte(s)\n", sizeof(long int));
print("Size of a long long int: %d byte(s)\n", sizeof(long long int));
print("Size of a float: %d byte(s)\n", sizeof(float));
return (0);
}
