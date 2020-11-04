#include<iostream>
using namespace std;

int max(int a[],int N){
	int max=INT8_MIN;

	for(int i=0;i<N;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	return max;
}
int main() {
	int N;
	cin>>N;
	int arr[100];
	for(int i=0;i<N;i++){
		cin>>arr[i];
	}
	int result=max(arr,N);
	cout<<result<<endl;
	return 0;
}