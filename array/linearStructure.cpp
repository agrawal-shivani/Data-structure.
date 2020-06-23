#include<iostream>
using namespace std;

int main(){
	int n,key;
	int a[1000];

	cout << "Enter no of element" << endl;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	cout<< "Enter the element you want to search :";
	cin>> key;
     
    int i; 
	for ( i = 0; i < n; ++i)
	{
		if (key==a[i])
		{
			cout<<key<<" found at "<<i<<" index ";
			break;
		}
	}

	if(i==n){
		cout<<key<<" is not present "<<endl;
	}

	return 0;
}