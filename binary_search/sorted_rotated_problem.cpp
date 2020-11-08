#include<iostream>
using namespace std;


int find_key(int s,int e,int key,int a[]){
    while(s<=e){
    	int mid=(s+e)/2;
    	if(a[mid]==key){
    		return mid;
    	}
    	else if(a[s]<=a[mid]){
    		//2 cases-> Element lies on the left or the right of the mid
    		if(key>=a[s] and key<=a[mid]){
    			e=mid-1;
    		}
    		else{
    			s=mid+1;
    		}
    	}
    	else{
    		if(key>=a[mid] and key<=a[e]){
    			s=mid+1;
    		}
    		else{
    			e=mid-1;
    		}
    	}
    }
 return -1;
}



int main(){
	int s=0,e,key,n;
	int a[1000];
	int i;

	cout<<"Enter size of array";
	cin>>n;
	e=n-1;

	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}

	cout<< "Enter the element you want to search :";
	cin>> key;
     

	cout<<find_key(s,e,key,a);
	return 0;

}