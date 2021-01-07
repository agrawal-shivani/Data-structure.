#include<iostream>
using namespace std;

int gcd(int a,int b){
	cout<<a<<" "<<b<<endl;
	return b==0?a:gcd(b,a%b);
}

int main(){
	int n1,n2;
	cin>>n1>>n2;

	cout<<gcd(n1,n2)<<endl;
	return 0;
}