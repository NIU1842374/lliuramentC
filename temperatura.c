#include <stdio.h>

int main(void) {
	int temperatura =25;
	printf("Temperature: %d degrees\n", temperatura);
	if (temperatura >= 20) {
		printf("High temperature\n");
	} else {
		printf("Low temperature\n");
	}
	return 0;
}

gcc -Wall -Wextra temperatura.c -o temperatura
./temperatura
