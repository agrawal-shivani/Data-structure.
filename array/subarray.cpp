#include<iostream>
using namespace std;

void subarray(int a[],int n){
	
	int s=0,k;
	for(int i=0;i<n;i++){
		int m=0;
		for(int j=0;j<n-i;j++){
			k=0;
			while(k<=s){
				cout<<a[m]<<"  ";
				m++;
				k++;
			}
			m=m-s;
			cout<<endl;
		}
		s++;
	}
}



int main(){
	int n;
	int a[1000];
	

	cout<<"Enter size of array";
	cin>>n;
	
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
    
	subarray(a,n);
	return 0;
}