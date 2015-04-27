#include <stdio.h>

int main(int argc, char **argv) {
	FILE *fp = fopen(argv[1], "r");
	char string[1001], motif[1001];
	char ch;
	int i = 0;
	int j = 0;
	int loc = 0;

	while ((ch = fgetc(fp)) != '\n') {
		string[i++] = ch;
	}
	string[i] = '\0';
	i = 0;
	while ((ch = fgetc(fp)) != EOF) {
		motif[i++] = ch;
	}
	motif[i - 1] = '\0';
	
	printf("motif: \"%s\"\nstring: \"%s\"\n", motif, string);

	for (i = 0; string[i] != '\0'; i++) {
		if (string[i] == motif[0]) {
			loc = i + 1;
			j = 1;
			while (string[i + j] == motif[j]) {
				j++;
				if (motif[j] == '\0') {
					printf("%d ", loc);
				}
			}
		}
	}
	putchar('\n');


	return 0;
}
