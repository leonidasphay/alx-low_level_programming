#include "main.h"
#include <unistd.h>

/**
 * _abs - computes
 * Description: computes the absolute value of an integer
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	return (-n);
}
