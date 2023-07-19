#include <stdio.h>


/**
* main - fibonacci <3
*
*
* Return:  (Success)
*/


int main(void)
{
unsigned long int i;
unsigned long int a = 1;
unsigned long int z = 2;
unsigned long int l = 1000000000;
unsigned long int a1;
unsigned long int a2;
unsigned long int z1;
unsigned long int z2;


printf("%lu", a);

for (i = 1; i < 91; i++)
{
printf(", %lu", z);
z += a;
a = z - a;
}

a1 = (a / l);
a2 = (a % l);
z1 = (z / l);
z2 = (z % l);

for (i = 92; i < 99; ++i)
{
printf(", %lu", z1 + (z2 / l));
printf("%lu", z2 % l);
z1 = z1 + a1;
a1 = z1 - a1;
z2 = z2 + a2;
a2 = z2 - a2;
}
printf("\n");
return (0);
}
