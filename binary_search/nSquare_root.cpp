#include<iostream>
using namespace std;


float square_root(int n,int p){
    int s=0;
    int e=n;
    float ans=-1.0;

    while(s<=e){
        int mid=(s+e)>>1;
        if(mid*mid==n){
            return mid;
        }
        else if(mid*mid<n){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }

    //floating  no
    float inc=0.1;
    for(int i=0;i<p;i++){
        while(ans*ans<=n){
            ans=ans+inc;
        }

        ans=ans-inc;
        inc=inc/10;
    }
   
 return ans;
}



int main(){
    int n;
	int p;
    cin>>n;
    cin>>p;

    cout<<square_root(n,p);
	return 0;

}