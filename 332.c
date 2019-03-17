#include<stdio.h>
int main()
{
	int M,N;
	double c,a,s;
	scanf("%d %d",&M,&N);
	a=M;
		if(N==1)
		{
		s=M;
		a=M/2;
	    }
	    else
	    {
	    N=N-1;
	    while(N--)
	     { 	     
	    	a=a/2;
	    	c+=a;
		 }
		 s=c*2+M;
		 a=a/2;
		 
	    }
	printf("%.2lf %.2lf",a,s);
	return 0;
	
}

