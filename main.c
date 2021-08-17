
#include <stdio.h>

int main(void)
{
	int max = 0, isInvalid = 0;
	printf("How many values (max=10): ");
	// get max value
	scanf("%d", &max);
	// initial array by max size
	int data[max];
	printf("Enter data: ");
	// loop according to max size
	for (int i = 0; i < max; i++)
	{
		// scan into data[index]
		scanf("%d", &data[i]);
		if (0 < data[i] && data[i] > 100)
		{
			isInvalid = 1;
			printf("Value is invalid.\n");
			break;
		}
	}
	if (isInvalid == 1)
	{
		return 0;
	}
	printf("Sorted data: ");
	// start sorting
	// order from last position to first
	for (int i = 0; i < max - 1; i++)
	{
		// the last i elements are already in right position
		for (int j = 0; j < max - i - 1; j++)
		{
			// check if next value is higher than or not
			if (data[j] > data[j + 1])
			{
				// if j + 1 is higher
				// swap the position
				// j + 1 to j
				// j to j + 1
				int temp = data[j + 1];
				data[j + 1] = data[j];
				data[j] = temp;
			}
		}
	}
	// print the result of sorted array
	for (int i = 0; i < max; i++)
	{
		printf("%d ", data[i]);
	}
	// new line
	printf("\n");

	return 0;
}
