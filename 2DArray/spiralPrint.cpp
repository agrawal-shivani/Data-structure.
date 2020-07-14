#include<iostream>
using namespace std;


int main(){
	int m,n,i,j,sr,sc,er,ec;
	int a[200][300];
	cout<<"Enter size of row"<<endl;
	cin>>m;
	cout<<"Enter size of column"<<endl;
	cin>>n;
    sr=0,sc=0,er=m-1,ec=n-1;

	

     

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

     
     cout<<"spiral print"<<endl;
     while(er>=sr && sc<=ec)
     {
       for(i=sc;i<=ec;i++){
          cout<<a[sr][i]<<" ";
       }
       sr=sr+1;

       for(i=sr;i<=er;i++){
          cout<<a[i][ec]<<" ";
       }
       ec=ec-1;
        
       if(sr<er){ 
       for(i=ec;i>=sc;i--){
          cout<<a[er][i]<<" ";
       }
       er=er-1;
       }

     if(sc<ec){
       for(i=er;i>=sr;i--){
          cout<<a[i][sc]<<" ";
       }
       sc=sc+1;
     }
     }






     
	
	return 0;
}