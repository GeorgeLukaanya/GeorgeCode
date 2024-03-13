#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char *_strpbk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
