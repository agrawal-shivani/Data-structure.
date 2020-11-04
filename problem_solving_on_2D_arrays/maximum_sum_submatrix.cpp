#include<iostream>
using namespace std;

int maxSumSubMatrix(int **arr,int n,int m){
	//col wise addition first
	for (int i = n-1; i >=0; i--)
	{
		for(int j=m-2;j>=0;j--){
			arr[i][j] += arr[i][j+1];
		}
	}

	//row wise addition secondly

	for(int j=m-1;j >=0;j--){
		for(int i=n-2;i>=0;i--){
            arr[i][j] += arr[i+1][j];
		}
	}

	int result=INT8_MIN;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			result=max(arr[i][j],result);
		}
	}
	return result;


}

int main(int argc,char const *argv[]){
	int n,m;
	cin>>n>>m;
	int **arr=new int *[n];
	for (int i = 0; i < n; ++i)
	{
	   arr[i]=new int[m];
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin>>arr[i][j];
		}
	}
	cout<<maxSumSubMatrix(arr,n,m)<<endl;
	return 0;
}