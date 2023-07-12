#include<stdio.h>

int main(){
	
	int num1,num2,limit,num3 = 1;
	
	printf("Enter the limit\n");
	scanf("%d",&limit);
	
	
	for(num1 = 1;num1<=limit;num1++)
	{
	    printf("%d ",num1);//num1=1,num1 =2      
		for(num2 = 1;num2<limit;num2++)
		{
			 num3 = num1 + 1;
			printf("%d ",num3);//1 2 3 4 5
			                 // 2 3 4 5 6
		}printf("\n");
	}
}
