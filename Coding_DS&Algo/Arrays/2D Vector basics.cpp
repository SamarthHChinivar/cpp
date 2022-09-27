// Basics of 2D Vectors like Input and Display:

#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector <vector <int>> v;
  
  //Input:
  
  int m,n;
  cout<<"Enter the Number of Rows and Columns:"<<endl;
  cin>>m>>n;
  
  int i,j;
  cout<<"Enter the Elements:"<<endl;
  for(i=0; i<m; i++)
  {
  	vector <int> v1;
  	int   value = 0;
  	
  	for(j=0; j<n; j++)
  	{
  	  cin>>value;
  	  v1.push_back(value);
	}
	
	v.push_back(v1);
  }
  
  //Display:
  
  cout<<endl;
  cout<<"List:"<<endl;
  
  for(i=0; i<v.size(); i++)
  {
  	for(j=0; j<v[i].size(); j++)
  	{
  	  cout<<v[i][j]<<" ";
	}
	
	cout<<endl;
  }
  
  return 0;
}
