#include<stdio.h>

void fun1()
{
	printf("in fun1\n");
	printf("in fun1\n");
	printf("in fun1\n");
	printf("in fun1\n");
}
void fun2()
{
	printf("in fun2\n");
	printf("in fun2\n");
	printf("in fun2\n");
	printf("in fun2\n");
}

void fun3()
{
	printf("in fun3\n");
	printf("in fun3\n");
	printf("in fun3\n");
	printf("in fun3\n");
}

void fun4()
{
	printf("in fun4\n");
	printf("in fun4\n");
	printf("in fun4\n");
	printf("in fun4\n");
}


/*
int main()
{
int (*fp)(int,int);//function pointer
printf("size of fp = %lu\n",sizeof(fp));
fp=fun1;
int res=fp(10,20);//call a function fun1
printf("Res = %d\n",res);
fp=fun4;
int res1=fp(20,4);
printf("Res1 = %d\n",res1);

}

*/






void main()
{
	int i;
	void (*fp[4])()={fun4,fun2,fun1,fun3};
	for(i=0;i<4;i++)
	{
		fp[i]();
	}


}



