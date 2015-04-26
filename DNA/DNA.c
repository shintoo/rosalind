#include <stdio.h>

int main(int argc, char **argv) {
	FILE *fp = fopen(argv[1], "r");
	int a, t, g, c;
	a = t = g = c = 0; 
	char ch;

	for (ch = fgetc(fp); !feof(fp); ch = fgetc(fp)) {
		switch(ch) {
			case 'A': a++; break;
			case 'T': t++; break;
			case 'G': g++; break;
			case 'C': c++; break;
		}
	}
	printf("%d %d %d %d\n", a, c, g, t);

	return 0;
}
