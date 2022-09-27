// Kadane's Algorithm:
/* It is used for finding largest contiguous sum subarray in a list */

#include<bits/stdc++.h>
using namespace std;

int kadane(int a[], int n) //O(n)
{
  int sum = 0;
  
  int *it;
  it = std::min_element(a,a+n);
  
  int m = *it; //minimum element is stored
  
  int i;
  for(i=0; i<n; i++) //O(n)
  {
  	sum = sum + a[i]; //adding elements
  	
  	if(sum >= m)
  	{
  	  m = sum;	
	}
	
	if(sum < 0)
	{ 
	  sum = 0;
	}
	
  }
  
  return m;
}

int main()
{
  cout<<"Kadane's Algorithm:"<<endl;
  cout<<"*******************"<<endl;
  cout<<endl;
  
  int n;
  cout<<"Enter the Number of Elements:"<<endl;
  cin>>n;
  
  int a[n],i;
  cout<<"Enter Elements:"<<endl;
  for(i=0; i<n; i++)
  	cin>>a[i];
  
  int k = kadane(a,n);
  
  cout<<endl;
  cout<<"Largest Sum Subarray of a List = "<<k<<endl;
  	  
  return 0; 
}
