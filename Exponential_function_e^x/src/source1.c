#include "source1.h"
float get_power(int x, int y) {
	int i, powr = 1;

	for (i = 1; i <= y; i++) {
		powr *= x;
	}
	return powr;

}

float get_fact(int a) {
	int n, fact = 1;

	for (n = 1; n <= a; n++) {
		fact *= n;
	}
	return fact;
}

