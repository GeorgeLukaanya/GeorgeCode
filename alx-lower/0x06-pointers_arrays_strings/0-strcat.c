#include "main.h"
 /**
  * _strcat - function that concatenates two strings
  * description: _strcat is a function that concatenates two strings
  * @dest: a pointer to the string to be concatenated upon
  * @src: the source string to be appended to @dest
  * return: a pointer to the destination string
  */

char *_strcat(char *dest, char *src)
{
	int k;

	int n;

	k = 0;

	while (dest[k] != '\0')
	{
		k++;
	}
	n = 0;

	while (src[n] != '\0')
	{
		dest[k] = src[n];
		k++;
		n++;
	}

	dest[k] = '\0';
	return (dest);
}


