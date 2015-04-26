#include <stdio.h>

int main(int argc, char **argv) {
	FILE *fp = fopen(argv[1], "r");
	char c;

	for (c = fgetc(fp); !feof(fp); c = fgetc(fp)) {
		if (c == 'T') {
			putchar('U');
		}
		else {
			putchar(c);
		}
	}
	return 0;
}
