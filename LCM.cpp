#include<stdio.h>

int main(){
	
	int num1,num2,i,LCM;
	
	printf("Enter two numbers\n");
	scanf("%d%d",&num1,&num2);
	i = (num1>num2)?num1:num2;
	while(i>0)
	{
		if(num1 % i == 0 && num2 % i == 0)
		{
			LCM = i;
		}
		i--;
	}

       printf("The least common divisor of %d and %d is %d",num1,num2,LCM);

	
}

