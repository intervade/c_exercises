#include <stdio.h>

/* this is a test of making the temp
 * program with a for loop instead of
 * a while loop.*/

#define LOWER 0 // lower limit of f
#define UPPER 300 // upper limit of f
#define STEP 20 // step size that f takes in the chart
main() {
	printf("\n Welcome to:\n a header?\n before the chart\n\n"); // print the header thing for exercise 1-3

	int temperatureF; // initialize temperatureF integer
	
	// this for loop prints the chart in the reverse order
	for (temperatureF = UPPER; temperatureF >= LOWER; temperatureF = temperatureF - STEP) // for loop without curly brackets since it's one line
		printf("%3d %6.1f\n", temperatureF, (5.0 / 9.0) * (temperatureF - 32.0)); // printf that displays F and C, doing C calcs
}
