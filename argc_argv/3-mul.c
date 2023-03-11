#include <stdio.h>
#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */

int main(int argc, char *argv[])
{
int i, sum = 1;
/*one for app name and two for the int values */
if (argc != 3)
{
printf("error\n");
return (1);
}
for (i = 1; i < argc; i++)
sum *= atoi(argv[i]);
printf("%d\n", sum);
return (0);
}
