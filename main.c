
#include <stdio.h>

int main(void)
{
	int max, isInvalid;
	printf("How many studens (max=10): ");
	scanf("%d", &max);
	if (max > 10 || max < 0)
	{
		printf("max value is in-valid.");
		return 0;
	}
	int ids[max], maxScore = 0, minScore = 100, total = 0;
	int marks[max];
	char grades[max];
	int frequency['G'];

	for (int i = 0; i < max; i++)
	{
		printf("Enter id and marks of student no.%d: ", i + 1);
		scanf("%d %d", &ids[i], &marks[i]);
		if (marks[i] < 0 || marks[i] > 100)
		{
			isInvalid = 1;
			printf("Invalid marks\n");
			break;
		}
		int mark = marks[i];

		if (maxScore < mark)
		{
			maxScore = mark;
		}
		if (mark <= minScore)
		{
			minScore = mark;
		}

		total = total + mark;
		if (mark >= 80)
		{
			grades[i] = 'A';
		}
		else if (mark >= 70 && mark <= 79)
		{
			grades[i] = 'B';
		}
		else if (mark >= 60 && mark <= 69)
		{
			grades[i] = 'C';
		}
		else if (mark >= 50 && mark <= 59)
		{
			grades[i] = 'D';
		}
		else
		{
			grades[i] = 'F';
		}
		frequency[grades[i]]++;
	}
	if (isInvalid == 1)
	{
		return 0;
	}
	printf("_________________________________________________\n");
	printf("|\tid\t|\tmark\t|\tgrade\t|\n");
	printf("-------------------------------------------------\n");
	for (int i = 0; i < max; i++)
	{
		printf("|\t%d\t|\t%d\t|\t%c\t|\n", ids[i], marks[i], grades[i]);
	}
	float mean = total / max;
	printf("-------------------------------------------------\n");
	printf("|\tmax\t|\tmin\t|\tmean\t|\n");
	printf("|\t%d\t|\t%d\t|\t%.2f\t|\n", maxScore, minScore, mean);
	printf("-------------------------------------------------\n");
	for (int i = 'A'; i <= 'F'; i++)
	{
		int show = frequency[i];
		if (show < 0 || show > max)
		{
			printf("Invalid show: %d",show);
			show = 0;
		}
		printf("%c=%d", i, show);
		if (i < 'F')
		{
			printf(", ");
		}
	}
	printf("\n");
	return 0;
}
