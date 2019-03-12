#include "Rational.h"
#include <iostream>
using namespace std;


Rational::Rational()
{
	mone = 0;
	mechane = 0;
}

Rational::Rational(int mone, int mechane)
{
	setMone(mone);
	setMechane(mechane);
}



Rational::~Rational()
{
}


int Rational::gcd(int a, int b)
{
	// Everything divides 0  
	if (a == 0)
		return b;
	if (b == 0)
		return a;

	// base case 
	if (a == b)
		return a;

	// a is greater 
	if (a > b)
		return gcd(a - b, b);
	return gcd(a, b - a);
}

void Rational::tzimzum()
{
	int mehalek = gcd(mone, mechane);
	setMone(mone / mehalek);
	setMechane(mechane / mehalek);
}


void Rational::setMone(int mone)
{
	this->mone = mone;
}

void Rational::setMechane(int mechane)
{
	if (mechane == 0)
	{
		cout << "ERROR" << endl;
		this->mechane = 1;
	}
	this->mechane = mechane;
}

int Rational::getMone()
{
	return mone;
}

int Rational::getMechane()
{
	return mechane;
}
