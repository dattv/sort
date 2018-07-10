#include <iostream>
#include <iomanip>
#include <math.h>

#include "sort.h"

using namespace std;

int main() {

	int n = 10;
	double a[10];
	a[0] = 1;
	a[1] = -1;
	a[2] = 3423234;
	a[3] = 324;
	a[4] = 3443534;
	for (int i = 5; i < n; i++)  a[i] = rand();

	std::cout << "intial values" << std::endl;
	for (int i = 0; i < n; i++) std::cout << a[i] << " ";
	std::cout << " " << std::endl;

	int ierr = quickSort(0, n - 1, a);
	std::cout << "ierr: ";
	std::cout << ierr << std::endl;

	std::cout << "Quick Sort: " << std::endl;
	for (int i = 0; i < n; i++) std::cout << a[i] << " ";

	system("pause");
	return 0;
}