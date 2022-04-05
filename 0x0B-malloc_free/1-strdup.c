#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strdup: returns a pointer to a newly allocated space in memory
 * @str: string to be duplicated
 * Return: NULL if str = NULL or if insufficient memory,pointer for success
 */
char *_strdup(char *str)
{
        char *j;
        int k, l;

        if (str == NULL)
                return (NULL);

        k = 0;
        while (str[k] != '\0')
        {
                k++;
        }

        j = malloc (sizeof(char) * k);
        

        for (l = 0; l < k; l++)
        {
                j[l] = str[l];

        }
	j[l] = '\0';
	return (j);
	free (j);
       

        

}
