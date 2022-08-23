//          *
//        * *
//      * * *
//    * * * *
#include<stdio.h>

void main(){
	int i,j,k,n;
		
	printf("Enter a number: ");
	scanf("%d",&n);
	
	for(i=n;i>0;i--){
		for(j=0;j<i-1;j++){
			printf(" ");
		}
		for(k=0;k<n-j;k++){
			printf("*");
		}
		printf("\n");
	}
	getch();
}
