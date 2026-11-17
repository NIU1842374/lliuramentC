#include <stdio.h>

int main(void) {
	int temperatura =25;
	printf("Temperature: %d degrees\n", temperatura);
	return 0;
}

gcc -Wall -Wextra temperatura.c -o temperatura
./temperatura
