//First and Last Occurences of Key element:

#include<bits/stdc++.h>
using namespace std;

vector<int> first_last_occurence(int a[], int n, int key)
{
  vector<int> v;
  
  int first = lower_bound(a,a+n,key) - a;
  
  if((first>=0 and first<n) and a[first]==key)
  	v.push_back(first);
  else
  	v.push_back(-1);
  
  int last = upper_bound(a,a+n,key) - a;
  last-- ;
  
  if((last>=0 and last<n) and a[last]==key)
  	v.push_back(last);
  else
  	v.push_back(-1);
  
  return v;
}

int main()
{
  int n;
  cout<<"Enter the Number of Elements:"<<endl;
  cin>>n;
  
  int a[n],i;
  cout<<"Enter Elements in a Sorted manner:"<<endl;
  for(i=0; i<n; i++)
  	cin>>a[i];
  
  int key;
  cout<<"Enter the Key Element:"<<endl;
  cin>>key;
  
  vector<int> ans;
  ans = first_last_occurence(a,n,key);
  
  cout<<endl;
  cout<<ans[0]<<" "<<ans[1]<<endl;
    
  return 0;	
}
