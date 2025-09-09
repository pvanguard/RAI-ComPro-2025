#include <stdio.h>

int main() {
	int array[] = { 3, 1, 2, 4, 5, 6 };
	int n = 6;

	int max_val = *array;

	for (int i = 1; i < n; i++) {
		if ((array[i]) > max_val) {
			max_val = (array[i]);
		}
	}

	printf("Max value: %d\n", max_val);

	return 0;
}