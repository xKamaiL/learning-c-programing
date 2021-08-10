
#include <stdio.h>

int main(void)
{
	for (int i = 7; i >= 1; i--)
	{
		if (i > 2)
		{
			printf("%d little ", i - 2);
		}
		if (i == 2)
		{
			printf("Sad mother ");
		}

		if (i == 1)
		{
			printf("Five little ");
		}

		printf("ducks went out");
		if (i == 1)
		{
			printf(" to play\n");
		}
		else
		{
			printf(" one day\n");
		}
		printf("Over the hill and far away\n");
		printf("Mother duck said, \"Quack, quack, quack, quack\"\n");
		if (i <= 2)
		{
			printf("And all ");
		}
		else
		{
			printf("But ");
		}
		if (i >= 4)
		{
			printf("only %d", i - 3);
		}
		if (i == 3)
		{
			printf("none of ");
		}

		if (i <= 3)
		{
			printf("of the five");
		}
		printf(" little ducks came back\n");
		for (int j = 1; j <= i - 3; j++)
		{
			printf("%d ", j);
		}
		printf("\n");
	}
	return 0;
}
