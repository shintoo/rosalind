#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {
	FILE *RNA = fopen(argv[1], "r");
	char codon[3];
	char ch;
	double val = 0, m;
	char table[] = "FFLLSSSSYY00CC0WLLLLPPPPHHQQRRRRIIIMTTTTNNKKSSRRVVVVAAAADDEEGGGG";
	while (!feof(RNA)) {
		for (int i = 0; i < 3; i++) {
			codon[i] = fgetc(RNA);
		}
		for (int i = 0; i < 3; i++) {
			m = pow(4, i);
			switch (codon[2 - i]) { 
				case 'C': val += 1 * m; break;
				case 'A': val += 2 * m; break;
				case 'G': val += 3 * m; break;
			}
		}
		putchar(table[(int)val]);
		val = 0;
	}
	putchar('\n');
	return 0;
}
