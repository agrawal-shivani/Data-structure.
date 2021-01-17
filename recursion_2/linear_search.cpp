#include<iostream>
using namespace std;
 

int firstOcc(int *a,int n,int key){
	//base case
	if(n==0){
		return -1;
	}
	if(a[0]==key){
		return 0;
	}
	int i=firstOcc(a+1,n-1,key);
	if(i==-1){
		return -1;
	}
	else 
		return i+1;
} 

int main(){
	int arr[]={1,2,3,7,4,5,6,7,10};
	int n=sizeof(arr)/sizeof(int);
	int key;
	cin>>key;
	cout<<firstOcc(arr,n,key)<<endl;
	return 0;
}