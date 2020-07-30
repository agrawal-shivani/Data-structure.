#include<iostream>
#include<algorithm>
using namespace std;




int main(){
	int N,j;
	int strength[1000];
	int energy[1000];

	

	cout<<"Enter size of array";
	cin>>N;
	
	cout<<"strength";
	for (int i = 0; i < N; ++i)
	{
		cin>>strength[i];
	}
    cout<<"energy";
	for (int i = 0; i < N; ++i)
	{
		cin>>energy[i];
	}
    
	sort(strength,strength+N);
    sort(energy,energy+N);

    

    j=0;
    while(j<N-1){
      if(energy[N-1]>strength[N-1]){
          N=N-1;
          j++;
    }
    else{
    	cout<<"LOSE";
    	break;
    }
	}

	if(j==N){
		cout<<"WIN";
	}

	return 0;
}