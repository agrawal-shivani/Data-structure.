#include<iostream>
using namespace std;


void readline(char a[],int maxlen,char delimeter){
     int i=0;
     char ch=cin.get();
     while(ch!=delimeter){
     	a[i]=ch;
     	i++;
     	if(i==(maxlen-1)){
     		break;
     	}
     	ch=cin.get();
     }
      //once out of the loop
     a[i]='\0';
     return;
}

int main(){
	char a[1000];
	readline(a,1000,'\n');
	cout<<a<<endl;

	

	return 0;
}