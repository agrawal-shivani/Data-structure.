#include<iostream>
using namespace std;


int main(){
	int n,i,m,j,a[100][100];
	cout<<"Enter size";
	cin>>n;

	  cout<<"Enter element in array"<<endl; 
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
    

    cout<<"Array"<<endl;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;

	}

	for(i=0;i<n;i++){
		int m=0,j=n-1;
		while(m<j){
			swap(a[i][m],a[i][j]);
			m++;
			j--;
		}
	}


	 for(i=0;i<n;i++)
	 {
	 	for(j=i;j<n;j++)
	 	{
	 		swap(a[j][i],a[i][j]);
	 	}
	 }

	 cout<<"output"<<endl;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}