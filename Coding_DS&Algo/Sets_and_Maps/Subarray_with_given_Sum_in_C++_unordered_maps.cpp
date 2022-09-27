//Subarray with given sum:

#include<bits/stdc++.h>
using namespace std;

void subarray_sum(int a[], int n, int s)
{
  //Create an Empty Map (unordered map):
  unordered_map <int,int> m;
  /* unordered_map <key value, mapped value> identifier; */
  
  int sum = 0;
  
  int i;
  for(i=0; i<n; i++)
  {
    sum = sum + a[i];
	
	if(sum == s) // case 1:
	{
	  cout<<"Sum found b/w "<<0+1<<" and "<<i+1<<endl;
	  
	  return;
	}
	
	if(m.find(sum-s) != m.end()) //case 2:
	{
	  cout<<"Sum found b/w "<<(m[sum-s] + 1) + 1<<" and "<<i+1<<endl;
	  
	  return;
	}
	
	m[sum] = i;		
  }
  
  cout<<"No Sum found"<<endl;
}

int main()
{
  int n;
  cout<<"Enter the Number of Elements:"<<endl;
  cin>>n;
  
  int a[n],i;
  cout<<"Enter Elements:"<<endl;
  for(i=0; i<n; i++)
  	cin>>a[i];
  	
  int s;
  cout<<"Enter Sum:"<<endl;
  cin>>s;
  
  subarray_sum(a,n,s);
  
  return 0;
}
