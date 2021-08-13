
#include <stdio.h>

int main(void)
{

	int grade[] = {0, 2, 3, 1, 2, 3, 4, 2, 1, 3, 2, 1, 2, 0, 3, 4, 4};
	int count[5] = {0}; // grades counter
	int avg;

	int size = sizeof(grade) / sizeof(int); // size of array

	int i = 0, j = 0;
	int sum = 0, mode = 0, modeValue = 0;
	while (i < size)
	{
		count[grade[i]]++;
		if (mode < count[grade[i]])
		{
			mode = count[grade[i]];
			modeValue = grade[i];
		}
		sum += grade[i];

		i++;
	}

	int median = 0, temp;
	// sort
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i; j++)
		{
			if (grade[j] > grade[j + 1])
			{
				temp = grade[j + 1];
				grade[j + 1] = grade[j];
				grade[j] = temp;
			}
		}
	}
	int medianPos = (size + 1) / 2;
	for (i = 0; i < size; i++)
	{
		printf("%d ", grade[i]);
	}
	printf("\n");
	printf("_________________________\n");
	printf("|\tgrade\t|\tamount\t|\n");
	printf("-------------------------\n");

	i = 0;
	while (i < 5)
	{
		printf("|\t");
		printf("%3d\t\t|", i);
		printf("\t%4d\t|\n", count[i]);
		i++;
	}

	printf("-------------------------\n");
	printf("mean average grade = %.2f\n", sum * 1.0 / size);
	printf("mode grade = %d\n", modeValue);
	printf("median grade = %d\n", grade[medianPos]);

	return 0;
}
