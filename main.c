#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define	RAND_MAX_MATRIX	10 /* Sets max limit for matrix */


int main() 
{
	printf("Welcome to [TEXT ADVENTURE]\n");
	srand(time(0));
	printf("%d\n", rand() % RAND_MAX_MATRIX);
	
	int i, counter;
	int player_matrix[3];

	for (counter = 0; counter < 3; ++counter)
		player_matrix[counter] = (rand() % RAND_MAX_MATRIX);
	

	printf("You have arrived at %d,%d,%d\n", player_matrix[0], player_matrix[1], player_matrix[2]);
	return 0;
}
