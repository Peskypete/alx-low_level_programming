#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'prints size of variable types in bytes'
 * @void:no parameters
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char charType;
int integerType;
long int longintType;
long int longlongintType;
float floatType;

printf("Size of a char: %ld byte(s)\n", sizeof(charType));
printf("Size of an int: %ld byte(s)\n", sizeof(integerType));
printf("Size of a long int: %ld byte(s)\n", sizeof(longintType));
printf("Size of a long long int: %ld byte(s)\n", sizeof(longlongintType));
printf("Size of a float: %ld byte(s)\n", sizeof(floatType));
return (0);
}
