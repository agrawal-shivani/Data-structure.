#include<iostream>
using namespace std;

int sumOfMatrix(int **arr,int n,int m){
	int i,j,sum=0;
	for(i=0;i<n;i++){
		for( j= 0; j < m; ++j)
		{
			int topLeft=(i+1)*(j+1);
			int bottomRight=(n-i)*(m-j);
			sum += (topLeft*bottomRight)*arr[i][j];
		}
	}
		return sum;

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
	cout<<sumOfMatrix(arr,n,m)<<endl;
	return 0;
}