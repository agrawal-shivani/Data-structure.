#include<iostream>
using namespace std;

//Bubble sort Recursively
void bubble_sort(int a[],int n){
	//base case
	if(n==1)
		return;
	//rec case
	//after you have moved the largest element in the current part to the end of the array by pairwise swapping
	for(int j=0;j<n-1;j++){
		if(a[j]>a[j+1])
			swap(a[j],a[j+1]);

	}
	//sort the first n-1 elements
	bubble_sort(a,n-1);
}

//another method
void bubble_sort_recursive(int *a,int j,int n){
	if(n==1)
		return;
	if(j==n-1){
		return bubble_sort_recursive(a,0,n-1);
	}
	if(a[j]>a[j+1]){
		swap(a[j],a[j+1]);
	}
	bubble_sort_recursive(a,j+1,n);
	return;
}
 
 


int main(){
	int a[]={5,4,3,1,2};
	int n=5;
	bubble_sort(a,n);
	for (int i = 0; i < n; ++i)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	bubble_sort_recursive(a,0,n);
	for (int i = 0; i < n; ++i)
	{
		cout<<a[i]<<" ";
	}

	return 0;
}