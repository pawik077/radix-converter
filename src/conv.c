#include "conv.h"

int toDec(char* input, int base) {
	int digits = 0;
	int dec = 0;
	while (input[digits++] != '\0');
	for (int i = digits - 2; i >= 0; i--) dec += intVal(input[i]) * pow(base, digits - i - 2);
	return dec;
}

char* fromDec(int dec, int base) {
	char conv[50];
	char rev[50];
	int num = dec;
	int i = 0;
	while (num != 0) {
		conv[i] = chVal(num % base);
		num = num / base;
		++i;
	}
	int j = i - 1;
	for (int i = 0; i <= j; i++) {
		rev[i] = conv[j - i];
	}
	rev[i] = '\0';
	char* res = malloc(i * sizeof(char));
	strncpy(res, rev, i);
	return res;
}