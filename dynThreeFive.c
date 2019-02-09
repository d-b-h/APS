#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main()
{
	int i,j,n;
	int array[16];
	memset(array,0,15*sizeof(array[0]));
	array[0] = 1;

	for(i=0;i<=12;i++)
	{
		array[i+3] = array[i] + array[i+3];


	}
for(i=0;i<16;i++)printf("%d\t",array[i]);
printf("\n");

for(i=0;i<=10;i++){
	
		array[i+5] = array[i] + array[i+5];


	}
for(i=0;i<=15;i++)printf("%d\t",array[i]);
printf("\n");
for(i=0;i<=5;i++)
	{
		array[i+10] = array[i] + array[i+10];

	}for(i=0;i<=15;i++)printf("%d\t",array[i]);
printf("\n");

	printf("\n%d\n",array[15]);
}
