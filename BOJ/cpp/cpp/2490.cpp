#include <iostream>

using namespace std;

int main() {
	for (int i = 0; i < 3; i++) {
		int sum = 0;
		char result;
		for (int j = 0; j < 4; j++) {
			int temp;
			cin >> temp;
			sum += temp;
		}
		switch (sum) {
		case 0:
			result = 'D';
			break;
		case 1:
			result = 'C';
			break;
		case 2:
			result = 'B';
			break;
		case 3:
			result = 'A';
			break;
		case 4:
			result = 'E';
			break;
		}
		cout << result << "\n";
	}
}