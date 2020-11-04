#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int arr[]={1,10,11,9,100};
	int n=sizeof(arr)/sizeof(int);
	int key;
	cin>>key;
	auto it=find(arr,arr+n,key);
	cout<<it<<endl;
	int index=it-arr;
	if(index==n){
		cout<<key<<" not present";
	}
	else
	   cout<<"present at index "<<index;
	return 0;
}