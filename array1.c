#include<stdio.h>
int findcharinstring(char x[],char ch)
{
	int index;
	for(index=0;x[index]!='\0';index++)
	{
		if(x[index]==ch)
			return index;
	}
	return -1;
}
int i,a;
char a[20]="python programming";
int pos;
pos= findcharinstring(a,'z');
if (pos==-1)
	printf("character not found");

else
	printf("characterfound at positive =%d\n",pos);
	

int main()
{
	findcharinstring(char x[],char ch);
}
