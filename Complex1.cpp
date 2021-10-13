#include <iostream>
#include "Complex.h"
using namespace std;
int main()
{
	Complex T1(0, 5);
	Complex T2(T1);
	Complex T3(1, 2);
	Complex T4(7, 3);
	Complex T5(5, 5);
	Complex T6(9, 8);
	Complex T7(4, 7);
	Complex T8(1, 2);
	vector<Complex> arr;
	arr.push_back(T1);
	arr.push_back(T2);
	arr.push_back(T3);
	arr.push_back(T4);
	arr.push_back(T5);
	arr.push_back(T6);
	arr.push_back(T7);
	arr.push_back(T8);
	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i].absolute_value() << " ";
	}
	cout << endl;
	sort_complex_numbers(arr);
	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i].absolute_value() << " ";
	}
	cout << endl;

}

