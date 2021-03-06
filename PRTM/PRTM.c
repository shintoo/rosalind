#include <stdio.h>

int main(int argc, char **argv) {
	FILE *prot = fopen(argv[1], "r");
	double mass = 0;
	char ch;

	while (!feof(prot)) {
		ch = fgetc(prot);
		switch (ch) {
			case 'A': mass += 71.03711; break;
			case 'C': mass += 103.00919; break;
			case 'D': mass += 115.02694; break;
			case 'E': mass += 129.04259; break;
			case 'F': mass += 147.06841; break;
			case 'G': mass += 57.02146; break;
			case 'H': mass += 137.05891; break;
			case 'I': mass += 113.08406; break;
			case 'K': mass += 128.09496; break;
			case 'L': mass += 113.08406; break;
			case 'M': mass += 131.04049; break;
			case 'N': mass += 114.04293; break;
			case 'P': mass += 97.05276; break;
			case 'Q': mass += 128.05858; break;
			case 'R': mass += 156.10111; break;
			case 'S': mass += 87.03203; break;
			case 'T': mass += 101.04768; break;
			case 'V': mass += 99.06841; break;
			case 'W': mass += 186.07931; break;
			case 'Y': mass += 163.06333; break;
		}
	}
	printf("%f Da\n", mass);
	return 0;
}
