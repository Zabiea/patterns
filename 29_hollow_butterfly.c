#include<stdio.h>
#include<conio.h>

void main(){
	int i,j,k,l,m,n;
	
	printf("Enter a number: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		for(j=0;j<=i;j++){
			if(i==0||j==0||j==i){
				printf("*");
			}
			else{
				printf(" ");
			}
			
		}
		for(k=0;k<n-i-1;k++){
			printf(" ");
		}
		for(l=0;l<n-i-1;l++){
			printf(" ");
		}
		for(m=0;m<=i;m++){
			if(i==0||m==0||m==i){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	for(i=0;i<n;i++){
		for(j=0;j<=n-i-1;j++){
			if(i==n-1||j==0||j==n-i-1){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		for(k=0;k<i;k++){
			printf(" ");
		}
		for(l=0;l<i;l++){
			printf(" ");
		}
		for(m=0;m<=n-i-1;m++){
			if(i==n-1||m==0||m==n-i-1){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	getch();
}
