#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	auto sumY = int{ 0 };
	auto sumM = int{ 0 };
	for (int i = 0; i < n; ++i) {
		int t;
		cin >> t;

		sumY += (t / 30 + 1) * 10;
		sumM += (t / 60 + 1) * 15;
	}

	if (sumY < sumM) {
		cout << "Y " << sumY;
	}
	else if (sumM < sumY) {
		cout << "M " << sumM;
	}
	else {
		cout << "Y M " << sumY;
	}

	return 0;
}