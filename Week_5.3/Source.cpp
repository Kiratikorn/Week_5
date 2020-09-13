#include<stdio.h>
int main()
{
	int n;
	scanf_s("%d", &n);
	for (int i = 0; i <= n + 1; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == 0 || i == n + 1 || j == n - i)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	return 0;
}