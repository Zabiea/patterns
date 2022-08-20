#include<stdio.h>
#include<conio.h>

void main(){
	int i,j,n,k;
	
	printf("\nEnter the value of n: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++){
			printf("   ");
		}
		for(k=j;k<=n;k++){
			printf(" * ");
		}
		printf("\n\n");
	}
	getch();
}
