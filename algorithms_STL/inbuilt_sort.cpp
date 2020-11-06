#include<iostream>
#include<algorithm>
using namespace std;

bool compare(int a,int b){  //a=arr[j+1],b=arr[j]
	return a>b; //decending order
	// return b>a;  accending order
}

int main() {
	int n;
	cin>>n;
	int a[1000];
	 for (int i = 0; i < n; ++i)
	 {
	 	cin>>a[i];
	 }

	 //sort an array using sort() function, more efficient
	 sort(a,a+n,compare);
	 for (int i = 0; i < n; ++i)
	 {
	 	cout<<a[i]<<" ";
	 }
	 return 0;
}