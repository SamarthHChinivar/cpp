#include<iostream>
using namespace std;
int main()
{
  int i,j,n;
  cout<<"Enter the value of n:- \n";
  cin>>n;
  for(i=0;i<n;i++)
  {
  	for(j=0;j<n-i;j++)
  	{
  	  cout<<"*";
	}
	cout<<"\n";
  }
  return 0;
} 
