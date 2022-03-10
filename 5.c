#include<stdio.h>
#include<math.h>
int main ()  
{

	int a,b, sum = 0; 

	printf("Enter Number");
	scanf("%d", &a);
	for ( b = 1; b<=a; b = b + 1) 
	{
	sum += b;
	}
	printf("sum = %d", sum);
	return 0; 
}
