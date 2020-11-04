#include<iostream>
using namespace std;

int search(int **arr,int n,int m,int key){
	for (int i = m-1; i >=0; i--)
	{
	
		for(int j=0;j<n;j++){
			if(arr[j][i]==key){
				cout<<"key found at index "<<j<<" "<<i<<endl;
				return 0;
			}
			if(key<arr[j][i]){
				break;
			}
		
		}
	}

	
	return -1;


}

int main(int argc,char const *argv[]){
	int n,m,key,result;
	cin>>n>>m>>key;
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
	result=search(arr,n,m,key);
	if(result==-1){
		cout<<"key not found"<<endl;
	}
	return 0;
}