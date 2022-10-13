#include <stdio.h>
#include <stdlib.h>
#include "main.h"

//char *string_nconcat(char *, char *, unsigned int);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
char *s;

s = string_nconcat("Best ", "School", 4);
if (s == NULL)
{
printf("failedn");
return (1);
}
printf("%s\n", s);
free(s);
return (0);
}
