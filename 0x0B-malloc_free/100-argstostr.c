#include "main.h"
#include <stdlib.h>

char *argstostr(int ac, char **av)
{
int i, j, k = 0, len = 0;
char *result;

if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
len++;
len++;
}
result = malloc(sizeof(char) * (len + 1));
if (result == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++, k++)
result[k] = av[i][j];
result[k++] = '\n';
}
result[k] = '\0';
return (result);
}
