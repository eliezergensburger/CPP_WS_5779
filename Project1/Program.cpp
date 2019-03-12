#include "Rational.h"
#include <iostream>
using namespace std;

int main()
{
	Rational a,b;
	int n, m;
	cout << "Enter two rational numbers" << endl;
	cin >>m;
	cin >> n;
	a.setMechane(m);
	a.setMone(n);
	cin >> m;
	cin >> n;
	b.setMechane(m);
	b.setMone(n);



	system("pause");
	return 0;
}