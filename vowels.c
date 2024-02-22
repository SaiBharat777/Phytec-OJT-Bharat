#include<stdio.h>
int main()
{
	char data[20];
	int v_count=0,c_count=0;
	printf("enter a string");
	scanf("%s",data);
	for(int i=0;data[i]!='\0';i++)
	{
	if(data[i]=='a' || data[i]=='e'||data[i]=='i' || data[i]=='o'||data[i]=='u')
		{
			v_count++;
		}
		else
		{
			c_count++;
		}
		printf("vowels are %d\n",v_count);
		printf("consonent are %d\n",c_count);
		return 0;
	}
}
