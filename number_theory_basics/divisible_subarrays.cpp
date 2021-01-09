#include<iostream>
#include<cstring>
using namespace std;
#define ll long

ll a[10005],pre[10005];

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		memset(pre,0,sizeof(pre));
		int sum=0;
		pre[0]=1;

	     //read the input
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
			sum += a[i];
			sum=(sum+n)%n;
			pre[sum]++;
		}
		ll ans=0;
		for (int i = 0; i < n; ++i)
		{
			ll m=pre[i];
			ans += (m*(m-1))/2;
		}
		cout<<ans<<endl;
	}
	

	return 0;
}