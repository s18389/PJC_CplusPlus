#include <iostream>
using namespace std;

void problem2() {
	int num;
	cin >> num;

	int minN = num,
		minT = num,
		maxN = num,
		maxT = num,
		minNS = 1,
		maxNS = 1;

	for (int i = 1;; i++) {
		cin >> num;
		if (num == 0) break;

		if (num > maxT) {
			maxT = num;
			if (maxT > maxN) {
				maxNS = 0;
				maxN = maxT;
			}
		}
		if (num == maxT) maxNS++;


		if (num < minT) {
			minT = num;
			if (minT < minN) {
				minNS = 1;
				minN = minT;
			}
		}
		if (num == minN) minNS++;
	}

	std::cout << "Min = " << minN << " " << minNS << endl;
	std::cout << "Max = " << maxN << " " << maxNS << endl;
}

int main() {

	problem2();
	

	std::system("pause");
}

