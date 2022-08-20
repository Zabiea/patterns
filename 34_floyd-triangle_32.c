#include<stdio.h>
#include<conio.h>

void main(){
	int i,j,n,p=1;
	
	printf("\nThe Floyd's Triangle");
	printf("\nEnter the number of steps: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("\t%d",p);
			p++;
		}
		printf("\n\n\n");
	}
	getch();
}
