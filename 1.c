#include <stdio.h>
#include <math.h>
 int main () 
{
	int a;
	int b; 
	printf("Enter a ");
	scanf("%d", &a); 
	printf("Enter b");
	scanf ("%d", &b); 
	int temp;
	 temp = a; 
	 a = b; 
	 b = temp; 
	 printf ( "Result After a = %d, b= %d", a , b); 
         return 0;
} 
