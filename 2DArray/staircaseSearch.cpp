#include<iostream>
using namespace std;


int main(){
	int n,i,m,j,a[1000][1000],key;
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
    cout<<"enter key"<<endl;
    cin>>key;
    i=0;
    j=n-1;

    while(i<n && j>=0){
    	m=a[i][j];
    	if(m==key){
    		break;
    	}
    	else if(m<key){
    		i=i+1;
    	}
    	else{
    		j=j-1;
    	}
    }

    if(m==key){
    	cout<<"position of key is  a"<<"["<<i<<"]"<<"["<<j<<"]"<<endl;
    }
    else{
    	cout<<"key not found";
    }
    
    return 0;


}


