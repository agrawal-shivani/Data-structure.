#include<iostream>
#include<vector>
using namespace std;

int main(){
	//you can create and initialize a vector
	vector<int> a;
	vector<int> b(5,10);
	vector<int> c(b.begin(),b.end());
	vector<int> d{1,2,3,4,5};

	//Look at how we can iterate over the vector

	for (int i = 0; i < b.size(); ++i)
	{
		cout<<b[i]<<"  ";
	}
	cout<<endl;
	//iterator
	for(auto it=b.begin();it!=b.end();it++){ //here it is a object for class auto which is inside class vector   vector<int> :: iterator it
		cout<<(*it)<<"  ";
	}
	cout<<endl;

	//foreach loop
	for(int x:d){
		cout<<x<<" ";
	}
	cout<<endl;

	//Discuss more functions
	vector<int> v;
	int n;
	cin>>n;
	int no;
	for (int i = 0; i < n; ++i)
	{
	   cin>>no;
	   v.push_back(no);
	}

	for(int x:v){
		cout<<x<<" ";
	}
	cout<<endl;

	//At memory level,what are the differences in d and v
	cout<<v.size()<<endl;
	cout<<v.capacity()<<endl;
	cout<<v.max_size()<<endl;

	cout<<d.size()<<endl;
	cout<<d.capacity()<<endl;
	cout<<d.max_size()<<endl;



	return 0;
}