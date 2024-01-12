#include <stdio.h>

// program to get value of EOF and print it
// so actually this program does nothing because its not reading anything
// subsequently the value of EOF is never returned and the program
// hangs

main() {
	int c = (getchar() != EOF); // declare c integer
	
	printf("%d\n", c); // print value of c
}
