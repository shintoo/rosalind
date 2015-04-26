#include <stdio.h>

int main(int argc, char **argv) {
	FILE *fp = fopen(argv[1], "r");
	int count = 0;
	char c;
	int i;

	while ((c = fgetc(fp)) != EOF) {
		count++;
	}
	rewind(fp);
	char out[count + 1];
	for (i = count - 1; i >= 0; i--) {
		c = fgetc(fp);
		switch (c) {
			case 'A': out[i] = 'T'; break;
			case 'T': out[i] = 'A'; break;
			case 'G': out[i] = 'C'; break;
			case 'C': out[i] = 'G'; break;
			default: puts("ERROR!!!!!!!!!!!");
		}
	}
	out[count] = '\0';
	puts(out);
	return 0;
}
