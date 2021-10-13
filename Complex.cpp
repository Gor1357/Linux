#include "Complex.h"

Complex::Complex()
{
	int a = 0;
	int b = 0;
}
Complex::Complex(int a, int b)
{
	this->a = a;
	this->b = b;
}
Complex::Complex(const Complex& T)
{
	a = (T.a);
	b = (T.b);
}
int Complex::GetA() const
{
	return a;
}
int Complex::GetB() const
{
	return b;
}
void Complex::SetA(int x)
{
	a = x;
}
void Complex::SetB(int x)
{
	b = x;
}
double Complex::absolute_value() const
{
	return sqrt(a * a + b * b);
}


Complex operator + (Complex& T1, const Complex& T2)
{
	T1.SetA(T1.GetA() + T1.GetA());
	T1.SetB(T1.GetB() + T2.GetB());
	return T1;
}

Complex operator - (Complex& T1, const Complex& T2)
{
	T1.SetA(T1.GetA() - T2.GetA());
	T1.SetA(T1.GetB() - T2.GetB());
	return T1;
}

Complex operator * (Complex& T1, const Complex& T2)
{
	T1.SetA(T1.GetA() * T2.GetA() - T1.GetA() * T2.GetB());
	T1.SetB(T1.GetA() * T2.GetB() + T2.GetA() * T1.GetB());
	return T1;
}

Complex operator * (Complex& T, int value)
{
	T.SetA(T.GetA() * value);
	T.SetB(T.GetB() * value);
	return T;
}

bool operator < (const Complex& T1, const Complex& T2)
{
	return T1.absolute_value() < T2.absolute_value();
}

void sort_complex_numbers(std::vector<Complex>& V)
{
	for (int i = 0; i < V.size() - 1; ++i)
	{
		for (int j = 0; j < V.size() - i - 1; ++j)
		{
			if (V[j + 1] < V[j])
				std::swap(V[j], V[j + 1]);
		}
	}
}

void addition(Complex& T1, const Complex& T2)
{
	T1.SetA(T1.GetA() + T2.GetA());
	T1.SetB(T1.GetB() + T2.GetB());
}

void subtraction(Complex& T1, const Complex& T2)
{
	T1.SetA(T1.GetA() - T2.GetA());
	T1.SetB(T1.GetB() - T2.GetB());
}

void multiplication(Complex& T1, const Complex& T2)
{
	T1.SetA(T1.GetA() * T2.GetB() - T1.GetB() * T2.GetB());
	T1.SetB(T1.GetA() * T2.GetB() + T2.GetA() * T1.GetB());
}

void multiplication_by_constant(Complex& T, int value)
{
	T.SetA(T.GetA() * value);
	T.SetB(T.GetB() * value);
}
