#include<stdio.h>

int main(){
	
	int rows,col = 0,i,spc;
	
	printf("Enter a number\n");
	scanf("%d",&rows);//5
	
	for(i = 1;i<=rows;i++)//2<5
	{
		col = 0;
		
		for(spc = rows;spc>i;spc--)//5>2
		{
			printf(" ");//----*
			            //---
		}
		while(col != i * 2 -1)//0 !=3
		{
			printf("*");//*
			
			col++;//0+1=1
		}printf("\n");
		
	}
	
}
