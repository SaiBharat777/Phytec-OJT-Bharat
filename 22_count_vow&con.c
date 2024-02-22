#include<stdio.h>
int main()
{
	char ch[100];
	int vow=0,con=0;
	printf("Enter a string(in UPPERCASE): ");
	scanf("%s",ch);
	for(int i=0;ch[i]!='\0';i++)
	{
		if(ch[i]=='A' || ch[i]=='E' || ch[i]=='I' || ch[i]=='O' || ch[i]=='U')
		{
			vow++;
		}
		else
		{
			con++;
		}
	}
	printf("vowels = %d and consonents = %d\n",vow,con);
}
