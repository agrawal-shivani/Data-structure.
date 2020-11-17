#include<iostream>
#include "vector_templates.h"
using namespace std;

int main(){
	Vector<char> v;
	v.push_back(65);
	v.push_back(66);
	v.push_back(67);
	v.push_back(68);
	v.pop_back();

	v.push_back(70);
	v.push_back(71);

	cout<<"capacity "<<v.capacity()<<endl;
	for (int i = 0; i < v.size(); ++i)
	{
		cout<<v[i]<<" ";
	}
	return 0;

}