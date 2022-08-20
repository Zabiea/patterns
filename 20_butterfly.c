#include<stdio.h>
#include<conio.h>

void main(){
	int i,j,k,l,m,n;
	
	printf("Enter a number: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		for(j=0;j<=i;j++){
			printf("*");
		}
		for(k=0;k<n-i-1;k++){
			printf(" ");
		}
		for(l=0;l<n-i-1;l++){
			printf(" ");
		}
		for(m=0;m<=i;m++){
			printf("*");
		}
		printf("\n");
	}
	for(i=0;i<n;i++){
		for(j=0;j<=n-i-1;j++){
			printf("*");
		}
		for(k=0;k<i;k++){
			printf(" ");
		}
		for(l=0;l<i;l++){
			printf(" ");
		}
		for(m=0;m<=n-i-1;m++){
			printf("*");
		}
		printf("\n");
	}
	getch();
}
