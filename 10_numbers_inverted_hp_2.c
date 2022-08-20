#include<stdio.h>

void main(){
	int i,j,k=1,n;
		
	printf("Enter a number: ");
	scanf("%d",&n);
	
	for(i=n;i>0;i--){
		for(j=1;j<=i;j++){
			printf("%d",k);
		}
		printf("\n");
		k++;
	}
	getch();
}
