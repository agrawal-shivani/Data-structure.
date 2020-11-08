#include<iostream>
using namespace std;


int first_occurence(int s,int e,int key,int a[]){
	int ans=-1;
    int m;
 while(s<=e){
	   m=((s+e)/2);
    if(key==a[m]){
	    ans=m;
	    e=m-1;
	}

	else if(key<a[m]){
		e=m-1;
		
    }

	else{
		s=m+1;
	
    }
  }
 return ans;
}


int last_occurence(int s,int e,int key,int a[]){
	int ans=-1;
    int m;
 while(s<=e){
	   m=((s+e)/2);
    if(key==a[m]){
	    ans=m;
	    s=m+1;
	}

	else if(key<a[m]){
		e=m-1;
		
    }

	else{
		s=m+1;
	
    }
  }
 return ans;
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
     

	cout<<first_occurence(s,e,key,a)<<endl;
	cout<<last_occurence(s,e,key,a)<<endl;

	return 0;

}