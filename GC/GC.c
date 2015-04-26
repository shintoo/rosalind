#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	FILE *fp = fopen(argv[1], "r");
	char names[10][15];
	char ch;
	double gc[10];
	int count = 0;
	int length = 0;
	int j = 0;
	int largest = 0;

	while ((ch = fgetc(fp)) != EOF) {
		if (ch == '>') {
			count++;
		}
	}
	rewind(fp);
	puts("     Name      |  GC Content\n"
		 "----------------------------");
	fgetc(fp);
	for (int i = 0; i < count; i++) {
		while ((ch = fgetc(fp)) != '\n') {
			names[i][j++] = ch;
		}
		names[i][j] = '\0';
		j = 0;
		gc[i] = 0;
		while ((ch = fgetc(fp)) != '>' && ch != EOF) {
			if (ch == '\n') {
				continue;
			}
			length++;
			if (ch == 'G' || ch == 'C') {
				gc[i]++;
			}
		}
		gc[i] = gc[i] / length * 100;
		length = 0;
		printf("%s  |  %f%c\n", names[i], gc[i], '%');
	}

	
	for (int i = 1; i < count; i++) {
		if (gc[i] > gc[largest]) {
			largest = i;
		}
	}
	printf("\n%s:\t%f\n", names[largest], gc[largest]);
	return 0;
}

