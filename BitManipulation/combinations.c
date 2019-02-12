#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main()
{
	char data[] = {'a','b','c'};
	int size = 1;
	int size_set = 3;
	for(int k=0;k<size_set;k++)size = size*2;


	int i,j;
	for(i=0;i<size;i++)
	{
		for(j=0;j<size_set;j++)
		{
			if((i) & (1<<j))
				printf("%c", data[j]);
		}	
		printf("\n");
	}
}
