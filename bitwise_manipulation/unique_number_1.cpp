//Given a list of numbers where every numbers occur twice except one,find that unique number
#include<iostream>
using namespace std;


int main(){
	int n;
	cin>>n;
	int no;
	int result=0;
	for (int i = 0; i < n; ++i)
	{
		cin>>no;
		result=result^no;
	}
	cout<<result<<endl;
	return 0;
}