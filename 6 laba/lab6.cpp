#include <iostream>
#include "read.hpp"
#include "obr.hpp"
#include "print.hpp"

int main() {
	int n = 0;
	int m = 0;
	int mas[100][100] = {};
	int max = INT_MIN;
	int min = INT_MAX;
	mt::read(n, m, mas);
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (mas[i][j] < min) {
				min = mas[i][j];
			}
			if (mas[i][j] > max) {
				max = mas[i][j];
			}
		}
	}
	if (max + min == 0) {
		br::obr(n, m, mas);
	}
	pr::print(n, m, mas);
}