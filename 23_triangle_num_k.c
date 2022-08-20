#include<stdio.h>
#include<conio.h>

void main(){
	int i,j,k,l,n;
	
	printf("Enter a number: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++){
			printf("  ");
		}
		l=1;
		for(k=1;k<=2*i-1;k++){
			if(k%2==1){
				printf("%d ",l);
				l++;
			}
			else{
				printf("  ");
			}
			
		}
		printf("\n");
	}
	getch();
	
}
