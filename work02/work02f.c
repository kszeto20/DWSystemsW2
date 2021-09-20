#include <stdio.h>

void threeTimes (int a) {
	int times = 3;
	int b;
	int toRet = 1;
	for (b = times; b > 0; b--) {
		toRet *= a;
	}
	printf("%d to the third is: %d\n", a, toRet);
}

int main() {
	printf("Good News Everyone!\n");

	threeTimes(8);

	double i = 2.1 * 2;
	printf("Ans: %lf\n", i);

	int j = 2.5 * 2;
	printf("Ans2: %d\n", j);

	return 0;
}
