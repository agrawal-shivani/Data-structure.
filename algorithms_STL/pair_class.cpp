#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	pair<int,char> p1;
	p1.first=10;
	p1.second='A';

	pair<int,char> p2(p1);
	cout<<p2.first<<"  "<<p2.second<<endl;

	pair<int,string> p3=make_pair(100,"Audi");
	cout<<p3.first<<"  "<<p3.second<<endl;

    //Take input
    int a,b;
    cin>>a>>b;

    pair<int,int> p4=make_pair(a,b); 
	cout<<p4.first<<"  "<<p4.second<<endl;

	pair<pair<int,int>,string> car;
	car.second="AUdi";
	car.first.first=10;
	car.first.second=20;

	cout<<car.first.first<<"  "<<car.second<<endl;

	pair<int,int> array[3];

	for (int i = 0; i < 3; ++i)
	{
		cin>>array[i].first;
		cin>>array[i].second;
	}

	for (int i = 0; i < 3; ++i)
	{
		cout<<array[i].first<<"  "<<array[i].second<<endl;
		
	}
    return 0;
}