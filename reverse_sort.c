#include <string.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include "sort.h"

int compare_ptr(const void *a, const void *b) {
	return (*(int *)b  - *(int *)a); 
}

int compare(int a, int b) {
	return b - a;
}
