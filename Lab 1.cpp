#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");
	int A, B, C;
	cout << "������� ��� ����� ��������";
	cin >> A >> B >> C;
	int p = (abs(A) + abs(B) + abs(C)) / 2;
	int S = sqrt(p * (p - abs(A)) * (p - abs(B)) * (p - abs(C)));
	cout << "������� ������������ �����: ";
	cout << S;
}