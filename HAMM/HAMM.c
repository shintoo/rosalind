#include <stdio.h>

int main(int argc, char **argv) {
	FILE *first = fopen(argv[1], "r");
	FILE *second = fopen(argv[1], "r");
	char cf, cs;
	int count;

	while (cs != '\n') {
		cs = fgetc(second);
	}
	while (cf != '\n' && cs != EOF) {
		cf = fgetc(first);
		cs = fgetc(second);
		if (cs != cf) {
			count++;
		}
	}
	printf("%d\n", count);
	return 0;
}
