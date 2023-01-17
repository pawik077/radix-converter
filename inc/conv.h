#ifndef CONV_H
#define CONV_H

#include <math.h>
#include <string.h>
#include <stdlib.h>

#include "helpers.h"

int toDec(char* input, int base);
char* fromDec(int dec, int base);

#endif