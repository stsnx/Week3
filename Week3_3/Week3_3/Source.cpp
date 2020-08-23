#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
void main()
{
	long int a, b, min, gcd, oth;
	cin >> a >> b;
	if (a <= b)
	{
		min = a, oth = b;
	}
	else { min = b, oth = a; }
	for (int i = 1; i <= min; i++)
	{
		if (oth % i == 0 && min % i == 0)
			gcd = i;
	}
	cout << gcd;
}