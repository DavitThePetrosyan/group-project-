#include<stdio.h>
#include<math.h>
int main() 
{
int a , b , c; 
printf("Enter the Numbers");
scanf("%d", &a);
scanf("%d", &b);
scanf("%d", &c);
 if (a < b && b < c)
{
 printf("%d", c); 
return 0;
}
if (b < a && c < a) 
{
printf ("%d", a);
return 0; }   
printf("%d", b); 
return 0; 
}
