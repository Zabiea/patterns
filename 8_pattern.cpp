//pattern

//ABCDE
//ABCD
//ABC
//AB
//A

#include<iostream>
using namespace std;

int main(){
	int i,j,n;
	char c;
	cout<<"Enter the value of n: ";
	cin>>n;
	
	for(i=n;i>0;i--){
		for(j=0;j<i;j++){
			c='A'+j;
			cout<<c;
		}
		
		cout<<endl;
	
	}
	return 0;
	
}
