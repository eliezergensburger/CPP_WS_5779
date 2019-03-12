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
	int gcd(int, int)const;
	double getDoubleValue()const;
	void tzimzum();
public:
	//setters and getters
	void setMone(int mone);
	void setMechane(int mechane);
	int getMone() const;
	int getMechane() const;
	//print
	void print();
	//operators
	//assignment operator
	Rational& operator=(const Rational& other);
	//arithmetics

	Rational operator-(const Rational& rhs);
	Rational& operator--();
	Rational operator--(int);

	//logical operators
	bool operator==(const Rational& rhs);
	bool operator!=(const Rational& rhs);
	bool operator<(const Rational& rhs);
};

