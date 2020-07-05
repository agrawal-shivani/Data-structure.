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


     cout<<"wave print"<<endl;
	for(i=0;i<n;i++){
		if(i%2==0){
			j=0;
			while(j<m){
				cout<<a[j][i]<<" ";
				j++;
			}
		}

		if(i%2!=0){
			j=m-1;
			while(j>=0){
				cout<<a[j][i]<<" ";
				j--;
			}
		}
	}
    
	return 0;
}