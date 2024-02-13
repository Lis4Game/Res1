#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");
	int A, B, C;
	cout << "Введите три целых значения";
	cin >> A >> B >> C;
	int p = (abs(A) + abs(B) + abs(C)) / 2;
	int S = sqrt(p * (p - abs(A)) * (p - abs(B)) * (p - abs(C)));
	cout << "Площадь треугольника равна: ";
	cout << S;
}