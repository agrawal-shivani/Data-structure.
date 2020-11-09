#include<iostream>
using namespace std;


bool canPlaceCows(int stalls[],int n,int cows,int min_sep){
    int last_cows=stalls[0];
    int count=1;
    for(int i=1;i<n;i++){
         if(stalls[i]-last_cows>=min_sep){
            last_cows=stalls[i];
            count++;
            if(count==cows){
                return true;
            }
         }
    }
    return false;
}



int main(){
    //problem : Aggressive.Cows(spoj.com)
    int stalls[]={1,2,4,8,9}; //after sorting
    int n=5;
    int cows=3;

    //binary search algorithms
    int s=0;
    int e=stalls[n-1]-stalls[0];
    int ans=0;
    while(s<=e){
        int mid=(s+e)/2;
        bool cowsRakhPaye=canPlaceCows(stalls,n,cows,mid);
        if(cowsRakhPaye){
            ans=mid;
            s=mid+1;
        }
        else{
           e=mid-1;
        }
    }

    cout<<ans<<endl;
	return 0;

}