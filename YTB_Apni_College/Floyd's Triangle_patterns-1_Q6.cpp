#include<iostream>
using namespace std;
int main()
{
  int i,j,n,f=1;
  cout<<"Enter the value of n:- \n";
  cin>>n;
  for(i=1;i<=n;i++)
  {
  	for(j=1;j<=i;j++)
  	{
  	  cout<<f++<<" ";
	}
	cout<<"\n";
  }
  return 0;
}
