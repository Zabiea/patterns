#include<stdio.h>
#include<conio.h>

void main(){
	int i,j,n,k,l;
	
	printf("\nEnter the value of n: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++){
			printf("   ");
		}
		for(k=j;k<=n;k++){
			printf(" %d ",n-k+1);
		}
		for(l=2;l<=i;l++){
			printf(" %d ",l);
		}
		printf("\n\n");
	}
	getch();
}
