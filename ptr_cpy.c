#include<stdio.h>
int main()
{
	int i;
	char a[10]="manju";
	char b[10]="sanju";
	char *ptr1,*ptr2;
	ptr1=a;
	ptr2=b;
	for(i=0;*(ptr2+i)!='\0';i++)
	{
		*(ptr1+i)=*(ptr2+i);
	}
	*(ptr1+i)='\0';
	printf("the copied pointer is %s\n",a);
	printf("the copied string is %s\n",b);
	return 0;
}


