#include<iostream>
#include<climits>
using namespace std;

int main(){
	int l,s,x,n,i;
	int a[1000];
	l=INT_MIN;
	s=INT_MAX;

	cout<<"Enter the size of array"<<endl;
	cin>>n;

	for (int i = 0; i < n; ++i)
	{
	   cin>>a[i];
	}

	for(i=0;i<n;i++){
		x=a[i];
		if(x>l){
			l=x;
		}
	}
    for(i=0;i<n;i++){ 
        x=a[i];    
		if(x<s){
			s=x;
	    }
    }
	

	cout<<"Largest No  "<<l<<endl;
	cout<<"Smallest No  "<<s<<endl;

	return 0; 
}
