#include<stdio.h>
#include<conio.h>

void main(){
	int i,j,k,l,m,n,p,x;
	printf("\nEnter a number: ");
	scanf("%d",&n);
	printf("\n\n\n");
	for(i=n;i>0;i--){
		for(j=n;j>0;j--){
			if(i>=j){
				printf("%d ",i);
			}
			else{
				printf("%d ",j);
			}
		}
		for(k=2;k<=n;k++){
			if(i>=k){
				printf("%d ",i);
			}
			else{
				printf("%d ",k);
			}
		}
		
		printf("\n");
	}
	
	for(i=2;i<=n;i++){
		for(j=n;j>0;j--){
			if(j>=i){
				printf("%d ",j);
			}
			else{
				printf("%d ",i);
			}
		}
		for(k=2;k<=n;k++){
			if(i>=k){
				printf("%d ",i);
			}
			else{
				printf("%d ",k);
			}
		}
		printf("\n");
	}

	getch();
}
