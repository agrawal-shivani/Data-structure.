#include<iostream>
using namespace std;

int merge(int *a,int s,int e){
   int mid=(s+e)/2;
   int i=s;
   int j=mid+1;
   int k=s;
   int temp[100];
   int cnt=0;//cross inversions
   while(i<=mid and j<=e){
   	   if(a[i]<a[j])
           temp[k++]=a[i++];
       else{
       	   temp[k++]=a[j++];
           cnt +=mid-i+1;
         }

   }
   //fill the array if some elements are left in one of the arrays.
   while(i<=mid){
   	temp[k++]=a[i++];
   }
   while(j<=e){
   	temp[k++]=a[j++];
   }
   //we need to copy all element to original array
   for (int i = s; i <=e; ++i)
   {
   	  a[i]=temp[i];
   }
   return cnt;
}

int inversion_count(int *a,int s,int e){
	//base case
	if(s>=e){
		return 0;
	}
  //merge sort
	int mid=(s+e)/2;
	int x=inversion_count(a,s,mid);
  int y=inversion_count(a,mid+1,e);
  int z=merge(a,s,e);//cross inversions
	return x+y+z;
}
 


int main(){
	int a[100];
	int n;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	
	cout<<inversion_count(a,0,n-1)<<endl;
	return 0;
}