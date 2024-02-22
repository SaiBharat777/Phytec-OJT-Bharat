#include<stdio.h>
struct len{
	int len;
};
int main()
{
	int i=0;
	int len=0;
	char a[30]="Manjunath";
	while(a[i]!='\0')
	{
		len++;
		i++;
	}
	printf("length :%d\n",len);
	printf("%s",a);
	return 0;
}




	
	
