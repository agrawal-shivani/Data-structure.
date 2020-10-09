#include<iostream>
#include<cstring>
using namespace std;

bool isPalindrome(char ch[]){
	int start,end;
	start=0;
	end=strlen(ch)-1;


	while(start<end){
		if (ch[start]==ch[end])
		{
			start++;
			end--;
		}
		else
	       return false;
	}

	return true;
}

int main(){
	char ch[1000];
	cin.getline(ch,1000);
	
	if(isPalindrome(ch))
		cout<<"palindromic string"<<endl;
	else
		cout<<"not a palindrome ";
	return 0;
}