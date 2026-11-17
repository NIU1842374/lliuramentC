#include <stdio.h>

int main(void) {
	int temperatura =25;
	double fahrenheit = (temperatura * 9.0 / 5.0) + 32.0;
	printf("Temperature: %d degrees\n", temperatura);
	printf("fahrenheit: %1f degrees\n", fahrenheit);
	return 0;
}

gcc -Wall -Wextra temperatura.c -o temperatura
./temperatura
