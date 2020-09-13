#include<stdio.h>
int main()
{
	int n, i;
	printf("Enter a Number :");
	scanf_s("%d", &n);
	for (i = 0; i < (2 * n) - 1; i++)
	{
		if (i < n)
		{
			for (int j = 0; j <= i; j++)
			{
				printf("* ");
			}
			for (int j = 0; j < -4 * i + 4 * n - 4; j++)
			{
				printf(" ");
			}
			for (int j = 0; j <= i; j++)
			{
				printf("* ");
			}
		}
		else
		{
			for (int j = 0; j < n - (i - n) - 1; j++)
			{
				printf("* ");
			}
			for (int j = 0; j < 4 * (i - n + 1); j++)
			{
				printf(" ");
			}
			for (int j = 0; j < n - (i - n) - 1; j++)
			{
				printf("* ");
			}
		}
		printf("\n");
	}
	return 0;
}