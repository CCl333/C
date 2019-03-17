#include<stdio.h>
int main(void)
{
	int a[4];
	int t,i,b,k,j;
	for(i=0;i<4;i++)
	scanf("%d",&a[i]);
	for(j=1;j<4;j++)
	for(b=0;b<4-j;b++)
	if(a[b]>a[b+1])
	{
		t=a[b];
		a[b]=a[b+1];
		a[b+1]=t;
	}
	for(k=0;k<4;k++)
	printf("%d ",a[k]);
	return 0;
	
}
