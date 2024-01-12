#include <stdio.h>

main() {
	float temperatureF = 0, temperatureC;
	//int divTest = 5 / 9;
	//printf("%d\n", temperatureC);
	//printf("%d\n", divTest);

	while (temperatureF != 320) {
		temperatureC = 5.0 * (temperatureF - 32.0) / 9.0;
		printf("%3.0f %6.1f\n", temperatureF, temperatureC);
		temperatureF = temperatureF + 20.0;
	}
}
