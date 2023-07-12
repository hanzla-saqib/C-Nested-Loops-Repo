#include<stdio.h>

int main(){//check whether a number is a Strong Number or not. A number is strong when sum of factorial 
//of its digits is equal to number itself. E.g., 145 (1! + 4! + 5! = 145)
	
 	int num,num1,sum = 0,mod,fact = 1;
 	
 	printf("Enter a number\n");
 	scanf("%d",&num);//145
 	num1 = num;
 	while(num != 0) {
 		mod = num % 10;//145->5,14->4
 		
 		while(mod > 0) {
 			
 			fact *= mod;//1*5=5*4=20*3=60*2=120*1=120,1*4=4*3=12*2=24*1=24
			 mod--; //5->4->3->2->1,4->3->2->1
		 }
		 sum += fact;//0+120=120,120+24 = 144
		 fact = 1;//fact = 1
		 num /= 10;//145/10=14,14/10=1
	 }
	 
	 if(num1 == sum) {
	 	
	 	printf("%d is a strong number\n",num1);
	 }
	 else {
	 	printf("%d is not a strong number",num1);
	 }
}
