// Binary Search in C++ , using Recursion:

#include <bits/stdc++.h>
using namespace std;

int binary_search(int a[], int low, int high, int key)
{
  if(low <= high)
  {
  	int mid = (low+high)/2;
  	
  	if(a[mid] == key)
  		return mid;
  		
  	else if(a[mid] < key)
  		return binary_search(a,mid+1,high,key);
  		
  	else if(a[mid] > key)
  		return binary_search(a,low,mid-1,key);
  }
  
  return -1;	
}

int main()
{
  int n;
  cout<<"Enter the Number of Elements:"<<endl;
  cin>>n;
  
  int a[n],i;
  cout<<"Enter Elements in Sorted order:"<<endl;
  for(i=0; i<n; i++)
  	cin>>a[i];
  
  int key;
  cout<<"Enter the Element to be Searched:"<<endl;
  cin>>key;
  
  int pos;
  pos = binary_search(a,0,n-1,key);
  
  if(pos == -1)
  	cout<<"Element not found"<<endl;
  else
  	cout<<"Element "<<key<<" found at "<<pos+1<<endl;
  
  return 0;
}
