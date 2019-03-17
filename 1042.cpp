#include <stdio.h>
#include<string.h>
void lyy(char*);
int main()
{
	char line[100];
	gets(line);
	lyy(line);
	printf("%s",line);
	return 0;
	
}
void lyy(char*s)
{

for(;*s!='0';s++)
if(*s='z')
*s='a';
else
*s=*s+1;
}
