//Binary Search in C++ using iteration:

#include<bits/stdc++.h>
using namespace std;

int binary_search(int a[], int n, int key) //O(log n)
{
  int low = 0;
  int high = n-1;
  
  while(low <= high)
  {
  	int mid = (low + high)/2 ;
  	
  	if(a[mid] == key)
  		return mid;
  		
  	else if(a[mid] < key)
  		low = mid+1;
  		
  	else if(a[mid] > key)
  		high = mid-1;
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
  pos = binary_search(a,n,key);
  
  if(pos == -1)
  	cout<<"Element not found"<<endl;
  
  else
  	cout<<"Element "<<key<<" is found at "<<pos+1<<endl;
  
  return 0;
}
