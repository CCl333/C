#include<stdio.h>
int main()
{
	int N,a,s;
	 a=1;
	scanf("%d",&N);
	if(N>0)
	{
		N=N-1;
		while(N--)
		{
			a=(a+1)*2;
		}
		printf("%d",a);
	}
	else
	return 0;
}

