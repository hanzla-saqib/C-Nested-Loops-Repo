#include<stdio.h>

int main(){

    int i,j,limit,space;
    
    printf("Enter limit\n");
    scanf("%d",&limit);
    
    for(i = 0;i<=limit;i++) {
    	
    	for(space = 1;space<=limit - i;space++) {
    		
    		printf(" ");
		}
		int character = 'A';
		for(j = 0;j<=i;j++) {//0<=0
			
			printf("%c ",character);//---A
			                       //--A B A
			character++;//65->66->67 
		}
		character -= 2;//letter=64,letter=64,67-2=65
		
		for(j = 0;j <= i;j++) {//0<=0,
			if(character != '@'){//64=64,65!=64
			
			printf("%c ",character);//
			character--;
		}
		}printf("\n");
	}
    
    
	
}
