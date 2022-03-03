#include <stdio.h>
int k = 1;
int increment (int n)
 { int m = n + k; 
	 return m;
 }

int main ()
{
	int i = 5;
	int j = increment(i);
	for (i = 0 ; i < 5; ++i) 
	
	{
		int k = i ; 
		printf ("%d",k);
	}
}
		
