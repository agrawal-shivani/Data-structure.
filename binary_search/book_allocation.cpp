#include<iostream>
#include<climits>
using namespace std;

bool isPossible(int arr[],int n,int m,int curr_min){
    int studentUsed=1;
    int page_reading=0;
    for (int i = 0; i < n; ++i)
    {
           if(page_reading+arr[i]>curr_min){
                   studentUsed++;
                   page_reading=arr[i];
                   if(studentUsed>m){
                    return false;
                   }
           }
           else{
               page_reading +=arr[i];
           }
        
    }
    return true;
}


int findPage(int arr[],int n,int m){
    int sum=0;
    int ans=INT_MAX;
    //if N<M
    if(n<m){
        return -1;
    }
    //count no of pages
    for (int i = 0; i < n; ++i)
    {
        sum=sum+arr[i];
    }
    int s=arr[n-1];
    int e=sum;

    while(s<=e){
        int mid=(s+e)/2;
        if(isPossible(arr,n,m,mid)){
            ans=min(ans,mid);
            e=mid-1;
        }
        else{
            //It is not possible to divide at X pages
            //increase the no. of pages
            s=mid+1;
        }
    }
    return ans;
}


int main(){
    int t;
    cin>>t;

    for (int i = 0; i < t; ++i)
    {
        int n,m;
        cin>>n>>m;
        int arr[1000];
        for (int i = 0; i < n; ++i)
        {
            cin>>arr[i];
        }

        cout<<findPage(arr,n,m)<<endl;
        return 0;
    }
	return 0;

}