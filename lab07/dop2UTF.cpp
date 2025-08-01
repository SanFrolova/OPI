#include <iostream>
#include "transforminUtf.h"
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int num;
	cout << "Введите число : "; cin>> num;
	if (num < 0x80 and num >= 0) {
		cout << "Число имеет 1 октет" << endl;
		transforminUtf(num);
	}

	return 0;
}