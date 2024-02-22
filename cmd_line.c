#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
printf("Number of arguments  %d\n",argc);
printf("%p\n",argv[1]);
char *p=(char *)malloc(10);
printf("stack %p\n",&p);
printf("heap %p\n",p);


for(int i=0;i<argc;i++)
{
printf("argv[%d] %s\n",i,argv[i]);
}


}
