// Lab_03_3.cpp
// < �������, ��� ������ >
// ����������� ������ � 3.3
// ������������, ������ �������� �������.
// ������ 0.1
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ��������� ���������� ������
	cout << "x = "; cin >> x;

	// ������������ � ����� ����
	if (x <= -4)
		y = -2;
	else
		if (-4 < x && x <= 0)
			y = 1. / 4. * x;
		else
			if (0 < x && x <= 2)
				y = pow(x, 2);
				else
					y = (24 - 2 *x) / (5);
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}