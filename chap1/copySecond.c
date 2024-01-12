#include <stdio.h>

// making a file to copy, but making it more concise

main() {
	int c;

	while ((c = getchar()) != EOF)
		putchar(c);
}
