// Monte_Carlo_meth.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <time.h>
using namespace std;

# define N_MAX 1000
# define del_step 0.0001

double my_func(double x)
{
	double answer;

	answer = - (x * x) + (4 * x) - 1; 
	return (answer);
}

int main()
{
	/*double x;
	double answer;

	printf ("Enter any x for func: -(x ^ 2) + 4 * x - 1: ");
	scanf ("%lf", &x);
	printf("Your x = %lf\n", x);

	answer = my_func(x);
	printf("Answer for func = %lf\n", answer);
	
	
	int h;
	printf ("Enter N: ");
	scanf ("%d", &h);
	printf ("Amount of parts = %d\n", h);*/
	float a;
	float b;
	printf ("Enter start of interval: a = ");
	scanf ("%f", &a);
	printf ("Enter start of interval: b = ");
	scanf ("%f", &b);
	while (b < a)
	{
		printf ("Sorry, enter start of interval: b = ");
		scanf("%f", &b);
	}
	printf ("Your interval is [%f;%f].\n", a, b);
	
	float I;
	float ind;

	I = 0;
	ind = a;
	while (ind < b)
	{
		I += my_func(ind) * del_step;
		ind += del_step;
	}
	/*float *a_x = new float [h];
	int index;
	int i;
	float sum;
	time_t t;

	time(&t); //get the system time
	srand((unsigned int)t); //transfer time_t variable to integer variable and send it to the srand function

	sum = 0;
	i = 0;
	while (i < h)
	{
		index = rand() % N_MAX + 1;
		a_x[i] = a + (index * (b - a)) / N_MAX;
		sum += my_func(a_x[i]);
		i++;
	}
	float I;
	I = ((b - a) / (float)h) * sum;
	delete[] a_x;*/
	printf("\nYour answer I = %lf\n", I);
	system("pause");
    return 0;
}

