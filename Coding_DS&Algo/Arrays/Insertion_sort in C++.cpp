// Insertion Sort in C++   

#include <iostream>
using namespace std;

void Insertion_sort(int a[], int n)
{
  int i,j,item;
  
  for(i=0; i<n; i++)
  {
  	item = a[i];
  	j = i - 1;
  	
  	while(j != -1  &&  item < a[j])
  	{
  	  a[j+1] = a[j];
  	  j -- ;
	}
	
	a[j+1] = item;
  } 
  
}

int main()
{
  int n;
  
  cout<<"Enter the Number of Elements: \n";
  cin>>n;
  
  int A[n],i;
  
  cout<<"Enter the Elements of the Array: \n";
  for(i=0; i<n; i++)
  	cin>>A[i];
  	
  cout<<"Array Elements before Sorting: \n";
  for(i=0; i<n; i++)
  	cout<<A[i]<<"\t";
  cout<<"\n";
  
  Insertion_sort(A,n);
  
  cout<<"Array Elements after Sorting: \n";
  for(i=0; i<n; i++)
  	cout<<A[i]<<"\t";
  cout<<"\n";
  
  return 0;
}
