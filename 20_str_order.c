#include<stdio.h>
int main()
{
	char a[10],temp;
	printf("Enter a string ");
	scanf("%s",a);
	for(int i=0;a[i]!='\0';i++)
	{
		for(int j=0;a[j]!='\0';j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("orderd string %s",a);
}

