// Count pairs with given sum , using unordered maps:

#include<bits/stdc++.h>
using namespace std;

int count_pairs_sum(int arr[], int n, int sum)
{
  //Create an empty map:
  unordered_map <int,int> m;
  
  //Move all array elements to map (only 'first' is used):
  /*as 'second' by default counts the frequency of elements*/
  int i;
  for(i=0; i<n; i++)
  	m[arr[i]]++ ;
  	
  int twice_count = 0; //as we are counting pairs here
  
  //Count pair Logic:
  for(i=0; i<n; i++)
  {
    twice_count = twice_count + m[sum - arr[i]];
	
	if((sum - arr[i]) == arr[i])
		twice_count-- ;
  }	
  
  int count = twice_count/2;
  
  return count;
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
  
  int sum;
  cout<<"Enter the Sum:"<<endl;
  cin>>sum;
  
  int r = count_pairs_sum(a,n,sum);
  
  cout<<endl;
  cout<<"Number of Pairs = "<<r<<endl;
  	
  return 0;
}
