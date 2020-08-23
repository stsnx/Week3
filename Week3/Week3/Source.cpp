#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int a[1000][1000], b[1000][1000], ans[1000][1000];
int main()
{
	int x1, y1;
	scanf("%d%d",&x1,&y1);
	for (int i = 0; i < x1; i++)
	{
		for (int j= 0; j < y1; j++)
		scanf("%d",&a[i][j]);
	}
	for (int i = 0; i < x1; i++)
	{
		for (int j = 0; j < y1; j++)
			scanf("%d",&b[i][j]);
	}
	for (int i = 0; i < x1; i++)
	{
		for (int j = 0; j < y1; j++)
			ans[i][j]= a[i][j]+b[i][j];
	}
	for (int i = 0; i < x1; i++)
	{
		for (int j = 0; j < y1; j++)
			printf("%d ", ans[i][j]);
			printf("\n");
	}
	return 0;

}