#include<stdio.h>
struct car{
	int fuel_tank;
}c1,c2;
int main()
{
	c1.fuel_tank=20;
	c2.fuel_tank=30;
	printf("%d,%d",c1.fuel_tank,c2.fuel_tank);
	return 0;
}
