#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
char a[1000],b[1000];
int z;
int StrLen(char q[])
{
	int x;
	for (int i = 0; i < 1000; i++)
	{
		if (q[i] == '\0')
		{
			x = i; break;
		}
	}
	return x;
}
int main()
{
	std::cin >> a;
	std::cin >> b;
	if (StrLen(a) == StrLen(b))
	{
		for (int i = 0; i < StrLen(a); i++)
			z += a[i] - b[i];
		if (z == 0) printf("%s is equal to %s",a,b);
		else printf("%s is unequal to %s", a, b);
	}
	else printf("%s is unequal to %s", a, b);
	return 0;
}