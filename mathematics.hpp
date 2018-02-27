#ifndef MATHEMATICS_HPP
#define MATHEMATICS_HPP

#include <cmath> // for std::sqrt

namespace mathematics
{

double calculation( double a , double b , char operation )
{
	switch( operation )
	{
	case '+' :
	{
		return a + b;
	} break;
	case '-':
	{
		return a - b;
	} break;
	case '*':
	{
		return a * b;
	} break;
	case '/':
	{
		return a / b;
	} break;
	default:
	{
		return 0;
	}
	}
}

double heron (double a, double b, double c)
{
	double s=0;
	s = (a+b+c)/2;
	return std::sqrt(s*(s-a)*(s-b)*(s-c));
}
double square (double a)
{
	return a*a;
}
}

#endif // MATHEMATICS_HPP
