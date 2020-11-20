//We are given an array containing n numbers.All the number are present twice except for two numbers which are present only once.Find the unique no in linear time without using array extra space.

#include<iostream>
using namespace std;


int main(){
	int n;
	cin>>n;
	int a[100];
	int  no;
	int result=0;
    for (int i = 0; i < n; ++i)
    {
    	cin>>no;
    	a[i]=no;
    	result=result^no;

    }
    
	//result=a^b;
	int temp=result;
	int pos=0;
	while((temp & 1)!=1){
		pos++;
		temp=temp>>1;
	}
	int mask=(1<<pos);
	//The first bit in result is at position pos
	//Find those numbers which contain set bit at position pos
	int x=0;
	int y=0;
	for (int i = 0; i < n; ++i)
	{
		if ((a[i] & mask)>0)
		{
			x=x^a[i];
		}
	}

	y=result^x;
	cout<<min(x,y)<<" "<<max(x,y)<<endl;
	return 0;
}