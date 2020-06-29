#include<iostream>
using namespace std;


bool compare(int a,int b){
	cout<< "comparing "<<a<<" and "<<b<<endl;
	return a<b;
}


void bubble_sort(int a[],int n,bool (&cmp)(int a,int b)){
	int i,j;

	for(i=1;i<=n-1;i++){
		for(j=0;j<n-i;j++){
			if(cmp(a[j],a[j+1])){
				swap(a[j],a[j+1]);
			}
		}
	
	}
    
   
	for(i=0;i<n;i++){
		cout<<a[i]<<"  ";
	}
}


int main(){
	int n;
	int a[1000];
	

	cout<<"Enter size of array";
	cin>>n;
	
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
    
	bubble_sort(a,n,compare);
	return 0;
}