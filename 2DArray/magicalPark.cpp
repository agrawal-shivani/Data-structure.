#include<iostream>
using namespace std;

int magical_park(char a[][100],int m,int n,int k,int s){
	char c;



	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(s<k){
				cout<<endl<<"no";
				return -1;
			}
				c=a[i][j];
				
				if(j!=0){
					s=s-1;
				}
				

				if(c=='.'){
					s=s-2;
					
				}

				if(c=='*'){
					s=s+5;
				}

				if(c=='#'){
					break;
				}

		}
	}

	

	if(s>=k){
		cout<<endl<<"yes"<<endl;
		cout<<s;
	}
}



int main(){
	int m,n,k,s;
	cin>>m>>n>>k>>s;

	char park[100][100];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>park[i][j];
		}
	}


	for(int i=0;i<m;i++){
		cout<<endl;
		for(int j=0;j<n;j++){
			cout<<park[i][j]<<" ";
		}
	}
	magical_park(park,m,n,k,s);
	return 0;
}
















