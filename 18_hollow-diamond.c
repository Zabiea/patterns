#include<stdio.h>
#include<conio.h>

void main(){
	int i,j,k,n;
	
	printf("Enter a number: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++){
			printf(" ");
		}
		for(k=1;k<=(2*i-1);k++){
			if(k==1||k==2*i-1){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		
		printf("\n");
	}
	for(i=n-1;i>0;i--){
		for(j=0;j<=n-i-1;j++){
			printf(" ");
		}
		for(k=2*i-2;k>=0;k--){
			if(k==0||k==2*i-2){
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

