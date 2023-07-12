#include<stdio.h>

int main(){
	//Write a C program to find the number of trailing zeroes in a given factorial.
	int num,fac = 1,fac1,count = 0,mod;
	
	printf("Enter a number\n");
	scanf("%d",&num);
	
	for(int i = num;i>0;i--){
	
	  fac = fac * i;
	  
	}
	
    	fac1 = fac;
	while(fac != 0){
		
		mod = fac % 10;
		if(mod == 0)
		{
			count++;
		  
		  }
		  fac = fac / 10;  
	}
     printf("There are %d zeroes in %d",count,fac1);

}
