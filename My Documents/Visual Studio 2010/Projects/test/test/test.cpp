#include<iostream>
using namespace std;
void main(){
	int m,n;
	cin>>m>>n;
	int r;
	do{
		r=m%n;
		m=n;
		n=r;
	}while(r);
	cout<<m;
}