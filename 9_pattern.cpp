//pattern

//A
//BB
//CCC
//DDDD
//EEEEE

#include<iostream>
using namespace std;

int main(){
	int i,j,n;
	char c;
	cout<<"Enter the value of n: ";
	cin>>n;
	
	for(i=0;i<n;i++){
		for(j=0;j<=i;j++){
			c='A'+i;
			cout<<c;
		}
		
		cout<<endl;
	
	}
	return 0;
	
}
