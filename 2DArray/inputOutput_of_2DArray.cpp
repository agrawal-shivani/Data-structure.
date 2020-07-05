#include<iostream>
using namespace std;


int main(){
	int i,j,m,n;
	int a[m][n];
	cout<<"Enter size of row"<<endl;
	cin>>m;
	cout<<"Enter size of column"<<endl;
	cin>>n;
     

    cout<<"Enter element in array"<<endl; 
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
    

    cout<<"Array"<<endl;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}