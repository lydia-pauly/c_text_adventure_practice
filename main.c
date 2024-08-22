#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define	RAND_MAX_MATRIX	10 /* Sets max limit for matrix */


int main() 
{
	printf("Welcome to [TEXT ADVENTURE]\n");
	srand(time(0));
	printf("%d\n", rand() % RAND_MAX_MATRIX);
	return 0;
}
