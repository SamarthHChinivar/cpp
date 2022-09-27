//GAP Algorithm
//To Merge 2 Sorted arrays without using extra space

#include<bits/stdc++.h>
using namespace std;

int nextgap(int gap)
{
  //using recursion:
  
  //base case:
  if(gap <= 1)
  	return 0;
  
  //general case:
  else
  	return ((gap/2) + (gap%2));
}

void merge_2(long long arr1[], long long arr2[], int n, int m)
{
  int i,j;
  int gap = n+m;
  
  /* for(initial value; condition; iteration) */
  for(gap=nextgap(gap); gap>0; gap=nextgap(gap))
  {
    //Comparing elements in 1st array:
    for(i=0; i+gap<n; i++)
    {
      if(arr1[i] > arr1[i+gap])
	  	swap(arr1[i],arr1[i+gap]);	
	}
	
	//Comapring elements in both the arrays:
	for(j= gap>n ? gap-n : 0; j<m and i<n; i++,j++)
	{
      if(arr1[i] > arr2[j])
      	swap(arr1[i],arr2[j]);
	}
	
	//Comparing elements in 2nd array:
	if(j < m)
	{
	  for(j=0; j+gap<m; j++)
	  {
	    if(arr2[j] > arr2[j+gap])
			swap(arr2[j],arr2[j+gap]);	
	  }
	  	
	}
	
  } //end for
  
}

int main()
{
  int n,m;
  cout<<"Enter sizes of 2 arrays respectively:"<<endl;
  cin>>n>>m;
  
  long long arr1[n], arr2[m];
  int       i;
  
  cout<<"Enter Elements of 1st Array:"<<endl;
  for(i=0; i<n; i++)
  	cin>>arr1[i];
  	
  cout<<"Enter Elements of 2nd Array:"<<endl;
  for(i=0; i<m; i++)
  	cin>>arr2[i];
  	
  merge_2(arr1,arr2,n,m);
  
  cout<<endl;
  cout<<"OUTPUT:"<<endl;
  
  for(i=0; i<n; i++)
  	cout<<arr1[i]<<" ";
  	
  for(i=0; i<m; i++)
  	cout<<arr2[i]<<" ";
  	
  cout<<endl;	
  
  return 0;	
}
