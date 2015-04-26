#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	int months = atoi(argv[1]);
	int litter = atoi(argv[2]);
	int sum = 2, pairs = 1;
	int new, mature;

	puts("Month\tTotal");
	for (int i = 0; i < months; i++) {
		if (i & 2 == 0) {
			mature = new;
			sum += mature;
		}
		new = (mature / 2) * litter;
		sum += new;
		printf("%d\t%d\n", i, sum);
	}
	printf("%d\n", sum / 2);
	return 0;
}
