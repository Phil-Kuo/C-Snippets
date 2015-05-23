#include <stdio.h>

struct fraction
{
	int numerator, denominator;
};

int
main (int argc, char *argv[])
{
	
	return 0;
}

int
gcd(int m , int n)
{
	while (n != 0)
	{
		m = m / n;
		n = m % n;
	}
	return m;
}

struct fraction simplest(struct fraction f)
{
	struct fraction f1;
	int g;
	
	g = gcd(f.numerator, f.denominator);
	f1.numerator = f.numerator / g;
	f1.denominator = f.denominator /g;
	
	return f1;
}

struct fraction add_fraction(struct fraction f1, struct fraction f2)
{
	struct fraction f3;
	
	f3.numerator = f1.numerator * f2.denominator + f2.numerator * f1.denominator;
	f3.denominator = f1.denominator * f2.denominator;
	
	return simplest(f3);
}

struct fraction minus_fraction(struct fraction f1, struct fraction f2)
{

}


