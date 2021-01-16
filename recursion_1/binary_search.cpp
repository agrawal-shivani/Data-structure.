#include<iostream>
using namespace std;
 

int binary_search(int a[],int s,int e,int n,int key){
	int m=(s+e)/2;
	if(n==0){
		if(a[m]==key){
			return m;
		}
		else
			return -1;
	}
	if(a[m]==key){
		return m;
	}
	if(a[m]>key){
		return binary_search(a,s,m-1,n/2,key);
	}
	else
	 return binary_search(a,m+1,e,n/2,key); 
} 

int main(){
	int arr[]={1,2,3,4,5,10,20};
	int n=sizeof(arr)/sizeof(int);
	int key;
	cin>>key;
	cout<<binary_search(arr,0,n-1,n,key)<<endl;
	return 0;
}