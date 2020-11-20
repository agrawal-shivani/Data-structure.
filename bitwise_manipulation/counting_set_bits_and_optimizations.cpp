//Given a number N, find no of set bits in binary rep. of it
#include<iostream>
using namespace std;

int countBits(int n){
	int ans=0;
	while(n>0){
		ans +=(n & 1);
		n=n>>1;
	}
	return ans;  //complexity=0(logN+1)
}
//second method
int countBitsFast(int n){
	int ans=0;
	while(n>0){
		n=n & (n-1);
		ans++;
	}
	return ans;  //complexity= 0(no of set bits)
}

//third method
//cout<< _builtin_popcount(n)

int main(){
	int n;
	cin>>n;
	cout<<countBits(n)<<endl;
	return 0;
}