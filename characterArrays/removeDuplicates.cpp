#include<iostream>
#include<cstring>
using namespace std;

void removeDuplicates(char ch[]){
	//i=currentchar   j=nextchar
	int i=0,j=1;
	char ch1,ch2;
	int l=strlen(ch);
	if(l==0 or l==1){
		return;
	}

	while(i<l){
		char ch1=ch[i];
		char ch2=ch[j];
		if (ch1==ch2)
		{
			j++;

		}
		else {
			ch[i+1]=ch2;
		    i++;
		}
		
}

   ch[i+1]='\0';
	return;
	
}

int main(){
	char ch[1000];
	cin.getline(ch,1000);
	removeDuplicates(ch);
	cout<<ch<<endl;
	return 0;
}