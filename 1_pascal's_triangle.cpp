//Pascal's Triangle

//	  1
//   1 1
//  1 2 1
// 1 3 3 1
//1 4 6 4 1

#include<iostream>
using namespace std;



int fact(int);

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int k=0;k<n-i;k++){
			cout<<" ";
		}
		for(int j=0;j<=i;j++){
			cout<<fact(i)/(fact(i-j)*fact(j))<<" ";
		}
		cout<<endl;
	}
	return 0;
}

int fact(int n){
	int f=1;
	for(int i=2;i<=n;i++){
		f*=i;
	}
	return f;
}
