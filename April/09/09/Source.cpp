#include "Funcsions.h"

int max(int* num1, int* num2, int len1, int len2)
{
	int max = num1[0];
	for (size_t i = 1; i < len1; i++)
	{
		if (max < num1[i])
			max = num1[i];
	}
	for (size_t i = 1; i < len2; i++)
	{
		if (max < num2[i])
			max = num2[i];
	}

	return max;
}

int min(int* num1, int* num2, int len1, int len2)
{
	int min = num1[0];
	for (size_t i = 1; i < len1; i++)
	{
		if (min > num1[i])
			min = num1[i];
	}
	for (size_t i = 1; i < len2; i++)
	{
		if (min > num2[i])
			min = num2[i];
	}

	return min;
}

int avg(int* num1, int* num2, int len1, int len2)
{
	int sum{};
	for (size_t i = 0; i < len1; i++)
		sum += num1[i];
	for (size_t i = 0; i < len2; i++)
		sum += num2[i];

	return sum / (len1 + len2);
}