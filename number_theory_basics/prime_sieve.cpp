#include<iostream>
using namespace std;

#define ll long long

//Naive approach
bool isprime(int n){
	if(n==1){
		return false;
	}
	if(n==2){
		return true;
	}
	for(int i=2;i<n;i++){
		if(n%i==0){        //complexity=0(n*n) for n numbers
			return false;
		}
	}
	return true;

}

//sieve approach
void prime_sieve(int *p){
	//first mark all odd number's prime
	for (ll i = 3; i <1000000 ; i+=2)
	{
		p[i]=1;
	}
	//sieve
	for (ll i = 3; i < 1000000;i+=2)
	{
		//if the current number is not marked(it is prime)
		if(p[i]==1){
			//mark all the multiplies of i as not prime
			for (ll j = i*i; j < 1000000; j=j+i)
			{
				p[j]=0;
			}
		}
	}
	//special case
	p[2]=1;
	p[0]=p[1]=0;
}

int main(){
	int n;
	cin>>n;
	int p[1000000]={0};
	prime_sieve(p);

	//lets print primes upto range n
	for (int i = 0; i < n; ++i)
	{
		if(p[i]==1){
            cout<<i<<" ";
		}
	}
	return 0;
}
