#include<stdio.h>
int main()
{
	int n;
	scanf_s("%d", &n);
	for (int i = 0; i < 2 * n + 3; i++)
	{
		for (int j = 0; j <= n + 1; j++)
		{
			if (j == 0 || i == 0)
			{
				printf("* ");
			}
			else if (i == n + 1 && j <= n)
			{
				printf("* ");
			}
		}
		printf("\n");
	}
	return 0;
}