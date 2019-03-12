#pragma once
class Rational
{
public:
	Rational();
	Rational(int,int);
	virtual ~Rational();
private:
	int mone;
	int mechane;
	int gcd(int,int);
	void tzimzum();
public:
	void setMone(int mone);
	void setMechane(int mechane);
	int getMone();
	int getMechane();
};

