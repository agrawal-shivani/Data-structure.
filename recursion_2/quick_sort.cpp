//QUICK SORT
//Divide and conquer method
//NlogN on average case
//n^2 in worst case

#include<iostream>
using namespace std;

int partition(int *a,int s,int e){
	//inplace(cant take extra array)
	int i=s-1;
	int j=s;
	int pivot=a[e];

	for(j=s;j<=e-1;){
		if(a[j]<=pivot){
			//merge the smaller element in the region-1
			i=i+1;
			swap(a[i],a[j]);
		}
			//expand the larger region
			j=j+1;
	}
	//place the pivot element in the correct index
	swap(a[i+1],a[e]);
	return i+1;
}


void quicksort(int *a,int s,int e){
	//base case
	if(s>=e){
		return;
	}
	int p=partition(a,s,e);
	//left part
	quicksort(a,s,p-1);
	quicksort(a,p+1,e);

}

int main(){
	//quicksort
	int arr[]={2,7,8,6,1,5,4};
	int n=sizeof(arr)/sizeof(int);
	quicksort(arr,0,n-1);
	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}