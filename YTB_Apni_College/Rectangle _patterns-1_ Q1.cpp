#include<iostream>
using namespace std;
int main()
{
  int i,j,rows,columns;
  cout<<"Enter the no. of rows and columns :-\n";
  cin>>rows>>columns;
  for(i=1;i<=rows;i++)
  {
  	for(j=1;j<=columns;j++)
  	{
  	  cout<<"*";
	}
	cout<<"\n";
  }
  return 0;
}

