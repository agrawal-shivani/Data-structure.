#include<iostream>
using namespace std;

int main(){
	char a[100][1000];
	int no_of_string;
	cin>>no_of_string;

	cin.get();
	

	for (int i = 0; i < no_of_string; i++)
	{
		cin.getline(a[i], 1000);
	}


	//print out all the strings

	for (int i = 0; i < no_of_string; i++)
	{
		cout<<a[i]<<endl;
	}

	return 0;
}