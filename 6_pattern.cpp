//pattern

//1      1
//12    21
//123  321
//12344321

#include<iostream>
using namespace std;

int main(){
	int i,j,k,l,n;
	cout<<"Enter the value of n: ";
	cin>>n;
	
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			cout<<j;
		}
		for(k=(n-i)*2;k>0;k--){
			cout<<" ";
		}
		for(l=j-1;l>0;l--){
			cout<<l;
		}
		cout<<endl;
	
	}
	return 0;
	
}
