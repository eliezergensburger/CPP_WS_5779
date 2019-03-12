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


int Rational::gcd(int a, int b)const
{
	if (b == 0)
	{
		return a;
	}
	return gcd(b, a % b);

}

double Rational::getDoubleValue() const
{
	return (double)mone / mechane;
}

void Rational::tzimzum()
{
	int mehalek = abs( gcd(mone, mechane));
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

int Rational::getMone() const
{
	return mone;
}

int Rational::getMechane() const
{
	return mechane;
}

void Rational::print()
{
	if (mechane == 1 || mone == 0)
	{
		cout << mone << endl;
	}
	else
	{
		cout << mone << '/' << mechane << endl;
	}
}

Rational & Rational::operator=(const Rational & other)
{
	setMone(other.mone);
	setMechane(other.mechane);
}

Rational Rational::operator-(const Rational & rhs)
{
	Rational result;

	result.setMone(mone*rhs.mechane - rhs.mone*mechane);
	result.setMechane(mechane*rhs.mechane);
	result.tzimzum();

	return result;
}

Rational & Rational::operator--()
{
	mone -= mechane;
	return *this;
}

Rational Rational::operator--(int)
{
	Rational old = *this;
	mone -= mechane;
	return old;
}

bool Rational::operator==(const Rational & rhs)
{
	Rational temp1(mone,mechane);
	Rational temp2(rhs.mone, rhs.mechane);

	temp1.tzimzum();
	temp2.tzimzum();

	return ( temp1.mone == temp2.mone && temp1.mechane == temp2.mechane);
	
}

bool Rational::operator!=(const Rational & rhs)
{
	return !((*this) == rhs);
}

bool Rational::operator<(const Rational & rhs)
{
	return this->getDoubleValue() < rhs.getDoubleValue();
}
