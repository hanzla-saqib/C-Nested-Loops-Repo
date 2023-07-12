#include<stdio.h>

int main(){

    int rows,col,r,s,i,k,l = 1;

    printf("Enter rows\n");
    scanf("%d",&rows);//5

    r = rows / 2 + 1;//3
    s = rows / 2;//2

    for(i = 1;i<=rows;i++) {//2<=5
     k = l;//2
     
        for(col = 1;col<=r;col++) {//2<=5

            if(col <= s) {//1<=0

                printf(" ");//++1
                            //+212
                            //32123
            }
            *
           *1*
          *123*
           *1*
            *

    else if( i+col == 4||i+col == 6||i+col == 8 ){
        
printf("*");
    }
            else if(col <= rows / 2 + 1){
                printf("%d",k);//1
                k--;//0
            }
            else{
                k++;
                printf("%d",++k);
                k--;
            }
        }printf("\n");
        if(i < rows / 2 + 1) {//4<=3

            r++;//4
            s--;//1
        }
        else{
            r--;//4
            s++;//1
        }
        if(i < rows / 2 + 1) {
            l++;//2,3,4
        }
        else{
            l--;
        }
    }
}