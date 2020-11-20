#include<iostream>
using namespace std;

bool isOdd(int n){
	return(n & 1);
}

int getBit(int n,int i){
	int mask=(1<<i);
	int bit=(n & mask)>0?1:0;
	return bit;
}

int setBit(int n,int i){  //set 1 in ith pos
	int mask=(1<<i);
	int ans=n|mask;
	return ans;
}

void clearBit(int &n,int i){
	int mask=~(1<<i);
	n=n & mask;
}

void updateBit(int &n,int i,int v){
	int mask=~(1<<i);
	int cleared_n=n & mask;
	n=cleared_n | (v<<i);
}

//clear Range of bits
//-1=111111111111111111111111;

int clearLastIBits(int n,int i){
	int mask=(-1<<i);
	return n & mask;
}

int clearRangeItoJ(int n,int i,int j){
	int ones=(~0);
	int a=ones<<j+1;
	int b=(1<<i)-1;
	int mask=a|b;
	int ans=n & mask;
	return ans;
}

int main(){
	int n;
	n=5;
	int i=1;
	cout<<isOdd(n)<<endl;
	cout<<getBit(n,i)<<endl;
	cout<<setBit(n,i)<<endl;
     
    n=31;
    i=1;
    int j=3;
    cout<<clearRangeItoJ(n,i,j)<<endl; 
	return 0;
}