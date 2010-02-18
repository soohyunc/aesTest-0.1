/*
 * $Id$
 */

#include <stdio.h>
#include "aes.h"

int main()
{
	int x;

	printf("\n");
	x = aes_self_test();
	printf("  return value: %d\n\n", x);

	return x;
}

