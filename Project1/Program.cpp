#include "Rational.h"
#include <iostream>
using namespace std;

int main()
{
	Rational a,b;
	int n, m;
	char tav;
	cout << "Enter two rational numbers" << endl;

	cin >>m;
	cin >> tav;
	cin >> n;

	a.setMechane(n);
	a.setMone(m);

	cin >> m;
	cin >> tav;
	cin >> n;

	b.setMechane(n);
	b.setMone(m);

	cout << "a: ";
	a.print();
	cout << "b: ";
	b.print();

	cout << "b-a: ";
	(b-a).print();

	cout << "a!=b:" << endl;
	if (a != b)
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}
	system("pause");
	return 0;
}