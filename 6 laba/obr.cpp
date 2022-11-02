#include "obr.hpp"
#include <iostream>

namespace br {
	void obr(int& m, int& n, int mas[100][100]) {
		for (int i = 0; i < m; i++) {
			bool flag = false;

			for (int j = 0; j < n; j++) {
				int o = mas[i][j];
				while (o > 0) {
					if (o % 10 == 8) {
						flag = true;
						break;
					}
					o /= 10;
				}
				if (flag)
					break;
			}
			
			if (flag) {
				for (int r = 0; r < m - 1; r++) {

					for (int q = 0; q < m - 1; q++) {
						if (mas[i][q + 1] < mas[i][q]) {
							std::swap(mas[i][q + 1], mas[i][q]);
						}
					}

				}
			}

		}
	}
}

