#include<stdio.h>

int main(){
        
        int i,rows = 5,col = 0,spc;
        
        

	for(i = rows;i>=1;i--,col = 0)//2<5
	{
		int num = 1;
		
		for(spc = rows;spc>i;spc--)//5>2
		{
			printf(" ");//----*
			            //---
		}
		while(col != i * 2 -1)//0 !=3
		{
			col++;
			printf("%d",num);//*
			num++;
			
			
		}printf("\n");
		
	}
	
}
