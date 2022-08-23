
 
//     1
//    2 2
//   3 3 3
//  4 4 4 4
#include<stdio.h>
#include<conio.h>

void main(){
	int i,j,k,n;
	
	printf("Enter a number: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++){
			printf("  ");
		}
		for(k=1;k<=2*i-1;k++){
			if(k%2==1){
				printf("%d ",i);
			}
			else{
				printf("  ");
			}
		}
		printf("\n");
	}
	getch();
	
}
