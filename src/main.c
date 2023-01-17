#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include "conv.h"
#include "helpers.h"

int main() {
	char input[50];
	int base_a;
	int base_b;
	printf("Input: ");
	scanf("%s", input);
	printf("Input base: ");
	scanf("%d", &base_a);
	printf("Target base: ");
	scanf("%d", &base_b);
	char* res = fromDec(toDec(input, base_a), base_b);
	printf("Output: %s\n", res);
	free(res);
	return 0;
}