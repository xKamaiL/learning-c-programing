
#include <stdio.h>

int main(void)
{
	// declare max
	int max;
	printf("How many studens (max=10): ");
	scanf("%d", &max);
	// validate max value only range 0 to 10
	if (max > 10 || max < 0)
	{
		printf("max value is in-valid.");
		// exit
		return 0;
	}
	// declare array with size according to max;
	int ids[max], maxScore = 0, minScore = 100, total = 0;
	int marks[max], isInvalid;
	char grades[max];
	int frequency['G'];
	// loop for max times
	for (int i = 0; i < max; i++)
	{
		printf("Enter id and marks of student no.%d: ", i + 1);
		// get input from user
		// update pointer of ids , marks array which index of i
		scanf("%d %d", &ids[i], &marks[i]);
		// validate marks value which in 100 to 0
		if (marks[i] < 0 || marks[i] > 100)
		{
			// set invalid flag to 1
			isInvalid = 1;
			printf("Invalid marks\n");
			// exit loop
			break;
		}

		int mark = marks[i];
		// find the max score value
		if (maxScore < mark)
		{
			// set new max score
			maxScore = mark;
		}
		// find the min score value
		if (mark <= minScore)
		{
			// set new min score value
			minScore = mark;
		}

		// sum total value
		total = total + mark;
		// calculate grade

		if (mark >= 80)
		{
			// put grades A to index i
			grades[i] = 'A';
		}
		else if (mark >= 70 && mark <= 79)
		{
			// put grades B to index i
			grades[i] = 'B';
		}
		else if (mark >= 60 && mark <= 69)
		{
			// set grades C to index i
			grades[i] = 'C';
		}
		else if (mark >= 50 && mark <= 59)
		{
			// set grades D to index i
			grades[i] = 'D';
		}
		else
		{
			// set grades F into index i
			grades[i] = 'F';
		}
		// increase frequency by index grades (A,B,C,D,F)
		frequency[grades[i]]++;
	}
	// exit program if invalid marks value
	if (isInvalid == 1)
	{
		return 0;
	}
	printf("_________________________________________________\n");
	printf("|\tid\t|\tmark\t|\tgrade\t|\n");
	printf("-------------------------------------------------\n");
	// loop print all students
	for (int i = 0; i < max; i++)
	{
		// show ids, marks , gards by index i
		printf("|\t%d\t|\t%d\t|\t%c\t|\n", ids[i], marks[i], grades[i]);
	}
	// calculate mean by total divide by max
	float mean = total / max;
	printf("-------------------------------------------------\n");
	printf("|\tmax\t|\tmin\t|\tmean\t|\n");
	// show maxScore ,min score , mean
	printf("|\t%d\t|\t%d\t|\t%.2f\t|\n", maxScore, minScore, mean);
	printf("-------------------------------------------------\n");
	// loop A to F (A B C D E F)
	for (int i = 'A'; i <= 'F'; i++)
	{
		// pass loop if i equal to E
		if (i == 'E')
			continue;
			
		// set show be frequency index by grade char
		// filter unexcept value
		int show = frequency[i];
		// show must higher than zero and less than max value
		if (show < 0 || show > max)
		{
			// set to zero
			show = 0;
		}
		// A=d
		printf("%c=%d", i, show);
		// print comma
		if (i < 'F')
		{
			printf(", ");
		}
	}
	// new line
	printf("\n");
	return 0;
}
