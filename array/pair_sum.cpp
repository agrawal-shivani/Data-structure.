#include<iostream>
using namespace std;

void pair_sum(int a[],int n,int key){
	int i,j;
     i=0;
     j=n-1;
     int count=0;
     
     for(i=0;i<=j;i++){
          if(a[i]+a[j]==key){
               cout<<a[i]<<" , "<<a[j]<<endl;
               j--;
               count++;
          }

          if(a[i]+a[j]<key){
               // i++;
          }
          if(a[i]+a[j]>key){
               j--;
               i--;
          }
     }

     if(count==0){
          cout<<"Key can't found";
     }
    
}


int main(){
	int n,key;
	int a[1000];

     cout<<"enter key value";
     cin>>key;

	

	cout<<"Enter size of array";
	cin>>n;
	
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
    
	pair_sum(a,n,key);
	return 0;
}