#include<iostream>
using namespace std;


void insertion_sort(int a[],int n){
	int i,j,current;
	for(i=1;i<n;i++){
		j=i-1;
		current=a[i];
		while(j>=0 && a[j]>current){
            a[j+1]=a[j];
            j--;
		}
		a[j+1]=current;
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
    
	insertion_sort(a,n);
	return 0;
}