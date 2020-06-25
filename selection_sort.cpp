#include<iostream>
using namespace std;

void selection_sort(int a[],int n){
	int smallest,k,m,i,j;
	
	for(i=0;i<n-1;i++){
		smallest=99999;
		k=0;
		for (int j = i; j < n; j++)
		{
			if(smallest>a[j]){
				smallest=a[j];
				k=j;
			}
		}
		m=a[i];
		a[i]=a[k];
		a[k]=m;
	}

	for(i=0;i<n;i++){
		cout<< a[i] <<"  ";
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
    
	selection_sort(a,n);
	return 0;
}
