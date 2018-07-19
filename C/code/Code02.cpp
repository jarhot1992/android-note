/*
 *
 *  Created on: 2018年7月19日
 *      Author: jar
 */
/**
 * http://pkuic.openjudge.cn/hw06/1/
 */

#include <iostream>
using namespace std;

int main() {

	for (int d = 1; d <= 4; d++) {
		for (int p = 1; p <= 4; p++) {
			for (int t = 1; t <= 4; t++) {
				for (int h = 1; h <= 4; h++) {

					if (d != p && d != t && d != h && p != t && p != h && t != h
							&& ((d == 1) + (h == 4) + (h == 3)) == 1
							&& ((h == 1) + (d == 4) + (p == 2) + (t == 3)) == 1
							&& ((h == 4) + (d == 3)) == 1
							&& ((p == 1) + (t == 4) + (h == 2) + (d == 3) == 1)) {
						cout << p << endl << d << endl << t << endl << h;
					}

				}
			}
		}
	}

	return 0;
}

