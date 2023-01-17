#include "helpers.h"

char chVal(int num) {
	if (num >= 0 && num <= 9) return (char)(num + '0');
	else return (char)(num + 'A' - 10);
}

int intVal(char c) {
	if (c >= '0' && c <= '9') return (int)(c - '0');
	else if (c >= 'A' && c <= 'Z') return (int)(c - 'A' + 10);
	else return (int)(c - 'a' + 10);
}