#include<iostream>
using namespace std;

int main(){
	int a[10]={1,2,3,4};
	cout<<a[0]<<endl;

	char ch[10]={'a','b','c'};
	cout<<ch<<endl;

	char s1[]={'a','b','c'};
	char s2[]="abc";
	
	cout<<s1<<"  "<<sizeof(s1)<<endl;
	cout<<s2<<"  "<<sizeof(s2)<<endl;


	

	return 0;
}