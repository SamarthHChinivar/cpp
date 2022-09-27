// No of times an element is repeated , using unordered maps:

#include<bits/stdc++.h>
using namespace std;

void repeated_frequency(int a[], int n)
{
  unordered_map <int,int> m;
  
  int i;
  for(i=0; i<n; i++)
  	m[a[i]]++;
  	
  unordered_map <int,int>::iterator it;
  
  cout<<"Elements and their Frequency:"<<endl;
  for(it=m.begin(); it!=m.end(); it++)
  {
  	cout<<(*it).first<<" -> "<<(*it).second<<endl;
  }
  
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
  
  repeated_frequency(a,n);
  	
  return 0;
}
