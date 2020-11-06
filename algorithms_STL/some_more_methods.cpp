#include<iostream>
#include<algorithm>
using namespace std;

int main() {
  int a=10;
  int b=20;
  swap(a,b);

  cout<<a<<" and "<<b<<endl;
  cout<<max(a,b)<<endl;
  cout<<min(a,b)<<endl;

  int arr[]={10,20,30,40,50};
  int n=sizeof(arr)/sizeof(int);
  reverse(arr,arr+3);
  for (int i = 0; i < n; ++i)
  {
     cout<<arr[i]<<" ";
  }
  cout<<endl;
  cout<<max(arr[0],arr[1])<<endl;


  //reverse elements of array
  swap(arr[0],arr[1]);
   for (int i = 0; i < n; ++i)
  {
     cout<<arr[i]<<" ";
  }
  cout<<endl;


  next_permutation(arr,arr+n);
  for (int i = 0; i < n; ++i)
  {
     cout<<arr[i]<<" ";
  }



   return 0;

}