#include <stdio.h>
int main(void)
{
	int p[3][3] = {{1, 3, -4}, {1, 1, -2}, {-1, -2, 5}};
	int q[3][3] = {{8, 3, 0}, {3, 10, 2}, {0, 2, 6}};
	int r[3][3] = {};
	int i, j;
	for (i = 0; i < 3; i++)
	{

		for (j = 0; j < 3; j++)
		{
			r[i][j] = p[i][j] + q[i][j];
		}
	}
	printf("\nResult:\n"); // Matrix r
	for (i = 0; i < 3; i++)
	{

		for (j = 0; j < 3; j++)
		{
			printf("%d\t", r[i][j]);
		}
		printf("\n");
	}
	return 1;
}