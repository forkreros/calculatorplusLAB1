#include "calculator.h"

int Calculator::Add (double a, double b)
{
	return (int)(a + b + 0.5);
}

int Calculator::Sub (double a, double b)
{
	return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    return (int)(a * b + 0.5);
}
