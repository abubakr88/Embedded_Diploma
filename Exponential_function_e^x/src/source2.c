#include "source1.h"
#include "source2.h"
float get_exp(int x, int n) {
	int i;
	float f = 0, p = 0;
	float result = 0;
	for (i = 1; i <= n; i++) {
		f = get_fact(i);
		p = get_power(x, i);
		result += (p / f);
	}
	return result + 1.0;

}
