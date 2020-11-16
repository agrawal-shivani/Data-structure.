#include<iostream>
#include<vector>
using namespace std;

int main(){
     vector<int> d{1,2,3,4,5};
     d.push_back(16);
     //pop back / Removes the last element0(1)
     d.pop_back();
     //insert some elements in gthe middle.o(N)
     d.insert(d.begin()+3,100);
     d.insert(d.begin()+3,4,100);

     //erase some elements in the middle
     d.erase(d.begin()+2);\
     d.erase(d.begin()+2,d.begin()+5);

     //size
     cout<<d.size()<<endl;  //5
     cout<<d.capacity()<<endl;//10

     //resize
     d.resize(8);
     cout<<d.capacity()<<endl;//10
      //If the size is increasing the more memory will allocated
     d.resize(18);
     cout<<d.capacity()<<endl;//18

     //remove all thye elements of the vector,doesnot delete the memory accupied by the array
     d.clear();
     cout<<d.size()<<endl; //0
     cout<<d.capacity()<<endl;  //18

     //empty
     if(d.empty()){
     	cout<<"This is empty vector"<<endl;
     }

     d.push_back(10);
     d.push_back(11);
     d.push_back(12);
     cout<<"front"<<d.front()<<endl;
     cout<<"front"<<*(d.begin())<<endl;
     cout<<d.back()<<endl;

     //Reserve

	vector<int> v;
	int n;
	cin>>n;
	int no;
	v.reserve(n);
	for (int i = 0; i < n; ++i)
	{
	   cin>>no;
	   v.push_back(no);
	   cout<<"changing capacity"<<v.capacity()<<endl;
	}
	cout<<"capacity"<<v.capacity()<<endl;

	for(int x:v){
		cout<<x<<" ";
	}
	cout<<endl;



	return 0;
}