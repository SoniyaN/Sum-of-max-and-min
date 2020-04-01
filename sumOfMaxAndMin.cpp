// sumOfMaxAndMin.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<stdio.h>
#define MAX_SIZE 1000

int main()
{
	int i, j, n;
	long long int a[MAX_SIZE], sum = 0, min = 0, max = 0;
	printf("Enter the size of array\n");
	scanf_s("%d", &n);
	printf("Enter the array elements\n");
	scanf_s("%lld", &a[0]);
	min = a[0];
	max = a[0];
	sum = sum + a[0];
	for (i = 1;i < n;i++)
	{
		scanf_s("%lld", &a[i]);
		sum = sum + a[i];
		if (a[i] > max)
			max = a[i];
		if (a[i] < min)
			min = a[i];
	}
	printf("%lld %lld", (sum - max), (sum - min));
	return 0;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
