#include <stdio.h>

int main(int argc, char* argv[])
{
	int numbers[4] = {0};
	char name[4] = {'a'};

	// first, print them out raw
	printf("numbers: %d %d %d %d\n",
		numbers[0], numbers[1],
		numbers[2], numbers[3]);

	printf("name each: %c %c %c %c\n,
		numbers[0], numbers[1],
		numbers[2], numbers[3]);

