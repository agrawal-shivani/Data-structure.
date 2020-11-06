#include<iostream>
#include<algorithm>
using namespace std;

// bool compare(int a,int b){  
// 	return a<=b;
// }

int main() {
	//indian money change

	int coins[]={1,2,5,10,20,50,100,200,500,2000};
	int n=sizeof(coins)/sizeof(int);
	int money;
	cin>>money;
	while(money>0){
	    int lb=lower_bound(coins,coins+n,money)-coins;
	    int m=coins[lb];
	    if(m==money){
	    	cout<<m<<endl;
	    	break;
	    }
	    else{
	    int m=coins[lb-1];	
	    cout<<m<<",";
	    money=money-m;
	}
	 
	}
	 return 0;

}