#include<stdio.h>
#include<math.h>
 int main ()
{
	char a;
	scanf ("%c", &a);
	int c = a;
	printf ("%d", c);
	if (96<c && c<123){
		printf("It's an alphabetical character");
	} else {
		printf("It's a number");
	}
	return (0);
}

