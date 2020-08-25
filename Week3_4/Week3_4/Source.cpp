#define CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main()
{
	int x;
	cin >> x;
	for (int i = 1; i <= x; i++)
	{
		if (i % 5 == 0 || i % 7 == 0)
		{
			if (i % 5 == 0 && i % 7 == 0) printf("Five-Seven\n");
			else printf("USP\n");
		}
		else printf("Eco\n");
	}
	return 0;
}