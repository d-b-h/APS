#include<stdio.h>
#include<stdlib.h>

int main()
{

	int n,i,j;
	scanf("%d",&n);
	
	int array[n],dyn[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
		dyn[i] = 1;
	}

	for(i=1;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(array[i]>array[j] && dyn[j]+1>dyn[i])dyn[i]= dyn[j]+1;
		}
	}
	
	int max=0;
	for(i=0;i<n;i++)
	{
		if(dyn[i]>max)max=dyn[i];
	}

	printf("%d",max);
	
	

}
