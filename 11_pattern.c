#include<stdio.h>
#include<conio.h>

void main(){
	int i,j,n;
	
	printf("\nEnter the value of n: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("\t%d",j);
		}
		printf("\n\n\n");
	}
	getch();
}
