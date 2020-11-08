#include<iostream>
using namespace std;


int binary_search(int s,int e,int key,int a[]){
 while(s<=e){
       int m;
	   m=((s+e)/2);
    if(key==a[m]){
		// cout<<key <<" is found at index "<< m<<endl;
	  return m;
    }

	else if(key<a[m]){
		e=m-1;
		
    }

	else{
		s=m+1;
	
    }
  }
 return -1;
}



int main(){
	int s=0,e,key,n;
	int a[1000];
	int i;

	cout<<"Enter size of array";
	cin>>n;
	e=n-1;

	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}

	cout<< "Enter the element you want to search :";
	cin>> key;
     

	cout<<binary_search(s,e,key,a);
	return 0;

}