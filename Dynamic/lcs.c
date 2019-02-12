#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main()
{
	char str1[] = "anup";
	char str2[] = "anoop";
	int i,j;
	int arr[5][6];
	memset(arr[0],0,6*sizeof(arr[0]));
	

	for(i=0;i<5;i++)\
	{
		for(j=0;j<6;j++)
		{
			if(str1[i] == str2[j])arr[i+1][j+1] += arr[i][j];
			else
			{
				if(arr[i][j+1]>arr[i+1][j])arr[i+1][j+1] = arr[i][j+1];
				else arr[i+1][j+1] = arr[i+1][j]; 		
			}
		}
	}


	printf("%d",arr[5][6]);

}
