#pragma once
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
class Complex 
{
public:
	Complex();
	Complex(int, int);
	Complex(const Complex&);
	int GetA() const;
	int GetB() const;
	void SetA(int);
	void SetB(int);
	double absolute_value();
private:
	int a;
	int b;
};

Complex operator + (Complex& T1, const Complex& T2);
Complex operator - (Complex& T1, const Complex& T2);

Complex operator * (Complex& T1, const Complex&T2);

Complex operator * (Complex& T, int value);

void sort_complex_numbers(vector<Complex>& V);

void addition(Complex& T1, const Complex& T2);

void subtraction(Complex& T1, const Complex& T2);

void multiplication(Complex& T1, const Complex& T2);
void multiplication_by_constant(Complex& T, int value);
