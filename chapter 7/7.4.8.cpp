#include <iostream>
using namespace std;

int main() {
	int a[][6] = {
		{   62, 85,  33,125, 59,105 },   // Quantity
		{ 1001,949,1050,867,346,1025 }   // Part No.
	};
	int i, j, k, temp, temp1;

	//Bubble sorting is applieed on one first row while the other row is swapped

	for (j = 1; j<6; j++)
	{
		for (i = 0; i<5; i++)
		{
			if (a[0][i]<a[0][i + 1])
			{
				temp = a[0][i];
				a[0][i] = a[0][i + 1];
				a[0][i + 1] = temp;

				temp1 = a[1][i];
				a[1][i] = a[1][i + 1];
				a[1][i + 1] = temp1;
			}
		}
	}

	printf("\n\nArray after sorting:\n");
	for (i = 0; i <2; i++)
	{

		for (j = 0; j<6; j++)
		{
			printf("%d\t", a[i][j]);        //printing sorted array
		}
		printf("\n");
	}



		system("PAUSE");
		return 0;
	}
/*
b. Modify the function written in Exercise 8a to display the data in part number order.

#include <iostream>
using namespace std;
/*
int main() {
	int a[][6] = {
		{ 1001, 949, 1050, 867, 346, 1025 },   // Part No.
		{ 62, 85, 33, 125, 59, 105 }   // Quantity
	};
	int i, j, k, temp, temp1;

	//Bubble sorting is applieed on one first row while the other row is swapped

	for (j = 1; j<6; j++)
	{
		for (i = 0; i<5; i++)
		{
			if (a[0][i]<a[0][i + 1])
			{
				temp = a[0][i];
				a[0][i] = a[0][i + 1];
				a[0][i + 1] = temp;

				temp1 = a[1][i];
				a[1][i] = a[1][i + 1];
				a[1][i + 1] = temp1;
			}
		}
	}

	printf("\n\nArray after sorting:\n");
	for (i = 0; i <2; i++)
	{

		for (j = 0; j<6; j++)
		{
			printf("%d\t", a[i][j]);        //printing sorted array
		}
		printf("\n");
	}



		system("PAUSE");
		return 0;
	}
  */
