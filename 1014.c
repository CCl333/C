
#include <stdio.h>
int main()
{
    long long int sn,sum,n,i;
    sum=1;
    sn=0;
        scanf("%lld",&n);
    for(i=1;i<=n;i++)
{
        sum=sum*i;
        sn=sn+sum;
}
    printf("%lld",sn);
}

