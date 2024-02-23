/*Transfer contents from one file to another*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *f1, *f2;
	char filename[100], c;

	printf("Enter the file name to be read: ");
	scanf("%s", filename);

	f1 = fopen(filename, "r");
	if(f1==NULL)
	{
		printf("\nCannot open the file %s\n", filename);
		exit(0);
	}

	printf("Enter the file name to write: ");
	scanf("%s", filename);

	f2 = fopen(filename, "w");
	if(f2==NULL)
	{
		printf("\nCannot open the file %s\n", filename);
		exit(0);
	}

	c = fgetc(f1);
	while(c != EOF)
	{
		fputc(c, f2);
		c = fgetc(f1);
	}

	printf("\nContents copied to %s\n", filename);

	fclose(f1);
	fclose(f2);

	return 0;
}
	
