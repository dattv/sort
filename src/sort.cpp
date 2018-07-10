#include "sort.h"

int quickSort(int left, int right, double *array) {

	double temp;
	int itemp = (left + right) / 2;
	double pivot = array[itemp];
	int i = left, j = right;

	while (i <= j) {
		while (array[i] < pivot) i++;
		while (array[j] > pivot) j--;

		if (i <= j) {
			temp = array[i];

			array[i] = array[j];
			array[j] = temp;

			i++;
			j--;
		}

		if (left < j) quickSort(left, j, array);
		if (i < right) quickSort(i, right, array);
	}
	return 0;
}

int bubleSort(int n, double *array) {

	double temp;
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {

			if (array[i] > array[j]) {
				temp = array[i];

				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
	return 0;
}