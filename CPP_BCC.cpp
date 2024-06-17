#include <iostream>
using namespace std;

int main() {
	int So; 
	cout << "Nhập Số: ";
	cin >> So;
	for (int n = 2; n <= 9; n++) {
		for (int i = 1; i <= 10; i++) {

			cout << n << "x" << i << "=" << n * i << endl;
		}
	}

	return 0;
}