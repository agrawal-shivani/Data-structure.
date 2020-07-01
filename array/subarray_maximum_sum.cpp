#include<iostream>
using namespace std;

void maximum_subarray_sum(int a[],int n){
	int csum,i,j;
	int largest=-99999;
	int start=0;
	int end=0;
     for(i=0;i<n;i++){
     	for(j=i;j<n;j++){
     		csum=0;
     		for(int k=i;k<=j;k++){
     			cout<<a[k]<<",";
     			csum=csum+a[k];
     		}
     		cout<<endl;
     		if(csum>largest){
     			start=i;
     			end=j;
     			largest=csum;
     		}
     	}
     }
    
     for(int m=start;m<=end;m++){
     	cout<<a[m]<<",";
     }
     cout<<endl;
     cout<<"maximum sum is "<<largest;
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
    
	maximum_subarray_sum(a,n);
	return 0;
}