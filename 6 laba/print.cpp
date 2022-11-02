#include "print.hpp"
#include <iostream>
namespace pr {
	void print(int& n, int& m, int mas[100][100]) {
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				std::cout << mas[i][j] << " ";
			}
			std::cout << std::endl;
		}
	}
}
