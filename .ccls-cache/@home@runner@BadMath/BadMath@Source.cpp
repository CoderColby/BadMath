#include <iostream>
#include <iomanip>
using namespace std;

float average(int i1, int i2, int i3) {
	return (i1 + i2 + i3) / 3.0f;
}

int main() {
	int n1,n2,n3 = 0;
	cout << "This program calculates the average of three numbers." << endl;
	cout << "First number: "; cin >> n1;
	cout << "Second number: "; cin >> n2;
	cout << "Third number: "; cin >> n3;

	cout << setprecision(5) << fixed << "The average is " << average(n1, n2, n3) << endl;

	return 0;
}