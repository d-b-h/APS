#include<stdio.h>
#include<stdlib.h>

int main()
{

	int result,n;
	scanf("%d",&n);
	result = n & (n-1);//result is 0 for all powers of 2

	while(n)
	{

		result = result+1;
		n=n& (n-1);
	}

	//checks set bits


	int m;
	scanf("%d",&m);
	result = m&1; //checks even/odd

	result = -m; //2s compliment
	result = ~m; //2s compliment

}
