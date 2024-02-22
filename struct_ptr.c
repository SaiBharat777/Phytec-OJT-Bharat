#include<stdio.h>
struct abc{
	int x;
	int y;
	int z;
};
int main()
{
	struct abc a={1,1,1};
	struct abc *ptr=&a;
	printf("%d,%d,%d",ptr->x,ptr->y,ptr->z);
	return 0;
}
