#include<iostream>
using namespace std;
#include<climits>

void selection_sort(int a[],int n){
	
	
	for(int i=0;i<n-1;i++){
		int min_index=i;
	
		for (int j = i; j < n; j++)
		{
			if(a[min_index]>a[j]){
				min_index=j;
			}
		}
		swap(a[i],a[min_index]);
	}

	for(int i=0;i<n;i++){
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
