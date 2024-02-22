#include<stdio.h>
void permutation(char s[],int k)
{
	static char result[10];
	static int a[10];
	if(s[k]=='\0')
	{
		result[k]='\0';
		printf("%s\n",result);
		return;
	}
	for(int i=0;s[i]!='\0';i++)
	{
		if(a[i]==0)
		{
			result[k]=s[i];
			a[i]=1;
			permutation(s,k+1);
			a[i]=0;
		}
	}
}
int main()
{
	char input[10];
	printf("enter the string:");
	scanf("%s",&input);
	printf("permutation :%s\n",input);
	permutation(input,0);
	return 0;
}
