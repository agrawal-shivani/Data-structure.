#include<iostream>
using namespace std;

void maximum_subarray_sum(int a[],int n){
	int cs=0,ms=0,i,start=0,end=0;
     
     for(i=0;i<n;i++){
         

          cs=cs+a[i];
          if(cs<0){
               cs=0;
               if(i<n-1){
                    start=i+1;
               }
               continue;
          }

          if(cs>ms){
               ms=cs;
               end=i;
          }
         
     }
     
     cout<<start<<endl;
     cout<<end<<endl;		
    
     for(int m=start;m<=end;m++){
     	cout<<a[m]<<",";
     }
     cout<<endl;
     cout<<"maximum sum is "<<ms;
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