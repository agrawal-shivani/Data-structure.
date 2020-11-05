#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int arr[]={20,30,40,40,40,50,100,1100};
	int n=sizeof(arr)/sizeof(int);
	int key;
	cin>>key;
	bool present=binary_search(arr,arr+n,key);
	if(present){
		cout<<"present"<<endl;

		auto lb=lower_bound(arr,arr+n,key);
		cout<<"Lower bound of 40 is "<<(lb-arr)<<endl;

		auto ub=upper_bound(arr,arr+n,key);
		cout<<"upper bound of 40 is "<<(ub-arr)<<endl;

		cout<<"occ Freq of 40 is "<<(ub-lb)<<endl;
	}
	else{
		cout<<"Absent"<<endl;
	}
	
	return 0;
}