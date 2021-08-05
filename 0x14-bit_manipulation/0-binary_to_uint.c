#include "main.h"
#include <math.h>
#include <stdlib.h>

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, j, k, sum, res;

	i = 0;
	while (b)
	{
		if (b[i] != '0' || b[i] != '1')
		{
			return (0);
			break;
		}
		i++;
		b++;
	}
	sum = 0;
	k = i;

	for (j = 0; j < k; j++)
	{
		res = pow(2,j);
		sum += b[i] * res;
		i--;
	}
	return (sum);
}
