#include<iostream>
#include<cstring>
using namespace std;



int main(){
	char ch[1000][1000];
	int N,i;
	cin>>N;
	int maxString,currentString,largest_index;


	cin.get(); //consume extra space
	for(i=0;i<N;i++){
	   cin.getline(ch[i],1000);
	}

	if(N==1){
		cout<<ch[0];
		return 0;
	}

	maxString=strlen(ch[0]);
	for(i=1;i<N;i++){
        currentString=strlen(ch[i]);
        if(maxString<currentString){
        	maxString=currentString;
        	largest_index=i;
        }

	}

	cout<<ch[largest_index]<<endl;
	cout<<"length of largest string is "<<maxString<<endl;
	
	return 0;
}