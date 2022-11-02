#include "read.hpp"
#include <iostream>
#include <fstream>

namespace mt {
	void read(int& n, int& m, int mas[100][100]) {
		std::ifstream mat;
		mat.open("matr.txt");
		mat >> m;
		mat >> n;
		int q = 0;
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				mat >> q;
				mas[i][j] = q;
			}
		}
	}
}

