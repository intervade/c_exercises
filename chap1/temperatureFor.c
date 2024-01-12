#include <stdio.h>

/* this is a test of making the temp
 * program with a for loop instead of
 * a while loop.*/

main() {
	printf("\n Welcome to:\n a header?\n before the chart\n\n"); // print the header thing for exercise 1-3

	int temperatureF; // initialize temperatureF integer

	for (temperatureF = 0; temperatureF <= 300; temperatureF = temperatureF + 20) // for loop without curly brackets since it's one line
		printf("%3d %6.1f\n", temperatureF, (5.0 / 9.0) * (temperatureF - 32.0)); // printf that displays F and C, doing C calcs
}
