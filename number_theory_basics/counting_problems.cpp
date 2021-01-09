//Find out the no. of numbers between 1 and n which are divisible by any of the prime numbers less than 20

#include<iostream>
using namespace std;
#define ll long long

int main(){
	int t;
	cin>>t;

	ll primes[]={2,3,5,7,11,13,17,19};
	while(t--){
		ll n;
		cin>>n;
		ll subsets=(1<<8)-1;    //1<<N=2^N
		ll ans=0;
		for(ll i=1;i<=subsets;i++){
			ll denom=1;
			ll setBits=__builtin_popcount(i);

			for(ll j=0;j<=7;j++){
				if(i&(1<<j)){
					denom=denom*primes[j];
				}
			}
			if((setBits&1)){
				ans += n/denom;
			}
			else{
				ans -= n/denom;

			}
		}
			cout<<ans<<endl;
		
		
	
	}
	

	return 0;
}