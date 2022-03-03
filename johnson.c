#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int calc_det ( int a , int b , int c)
{
	return b*b - 4*a*c;
}

int solve(int a, int b, int c, float* x)
{
	int d = calc_det(a,b,c); 
	if (d > 0) {
		x [0] = (-1 * b + sqrt(d)) / 2 * a;
		x [1] = (-1 * b - sqrt(d)) / 2 * a;
		return 2; 
	} else if (d==0) {
		x[0] = x [1] = -1*b/ 2*a;
		return 1; 
	}
	return 0;
}

int main () 
{
	int a = 5;
	int b = 7; 
	int c = 9;
	float* x = (float*) malloc (2 * sizeof(float)); 
	int n = solve(a, b, c, x);
	if (n == 0) {
		printf("no solution");
	} else if (n == 1) {
		printf("one solution");
	} else {
		printf("two solutions");
	}
}

	

