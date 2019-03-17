#include<stdio.h>
void display(char cr, int lines, int width);
int main(void)
{
	int ch;
	int rows, cols;
	
	while((ch = getchar()) !='\n')
	{
		if (scanf("%d %d",&rows,&cols) != 2)
		break;
		display(ch,rows,cols);
		while (getchar() != '\n')
		continue;
	}
	return 0;
 } 
 
 void display(char cr, int lines,int width)
 {
 	int row,col;
 	for (row =1;row<=lines;row++)
 	{
 		for(col=1;col<=width;col++)
 		putchar(cr);
 		putchar('\n');
	 }
 }
