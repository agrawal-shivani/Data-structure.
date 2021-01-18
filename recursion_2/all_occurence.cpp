#include<iostream>
using namespace std;
 

// void allOcc(int *a,int i,int n,int key){
// 	//base case
// 	if(i==n)
// 		return;
// 	if(a[i]==key){
// 		cout<<i<<" ";
// 	}
// 	allOcc(a,i+1,n,key);
	
// } 

int storeOcc(int *a,int i,int n,int key,int *out,int j){
	if(i==n){
		return j;
	}
	if(a[i]==key){
		out[j]=i;
		//increment j to accomodate current occ
		return storeOcc(a,i+1,n,key,out,j+1);
	}
	//j remains unchanged
		return storeOcc(a,i+1,n,key,out,j);


}



int main(){
	int arr[]={1,2,3,7,4,5,6,7,10};
	int n=sizeof(arr)/sizeof(int);
	int key;
	cin>>key;
	int output[100];
	int cnt=storeOcc(arr,0,n,key,output,0);
	cout<<"count"<<cnt<<endl;
	for (int i = 0; i < cnt; ++i)
	{
		cout<<output[i]<<" ";
	}
	return 0;
}