// Quick Sort in C++ 

#include <bits/stdc++.h> // stdc++ stands for standard c++
using namespace std;     // this header file always ends with .h format

class Quick_sorting
{
  public:
  	
  void Read_and_Call()
  { 
    // Reading Input:
    
    int n;
    cout<<"Enter the Number of Elements: \n";
    cin>>n;
    
    int a[n],i;
    cout<<"Enter the Elements: \n";
    for(i=0; i<n; i++)
    	cin>>a[i];
    	
    // Function Calls:
    
    Quick_sort(a,0,n-1);
    
    cout<<endl;
    Display(a,n);
    cout<<endl;
  }
  
  void Quick_sort(int a[], int low, int high)
  {
  	if(low < high)
  	{
  	  int k = partition(a,low,high);
  	  
  	  Quick_sort(a,low,k-1);
  	  Quick_sort(a,k+1,high);
	}
  }
  
  int partition(int a[], int low, int high)
  {
  	int i = low;
  	int j = high;
  	
  	int key = a[low];
  	
  	while(i <= j)
  	{
  	  while(a[i] <= key)
  	  	i++ ;
  	  	
  	  while(a[j] > key)
  	  	j-- ;
  	  	
  	  if(i < j)
  	  	swap(a[i],a[j]);  
	}
	
	swap(a[low],a[j]);
	return j;
  }
  
  void Display(int a[], int n)
  {
  	int i;
  	
  	cout<<"Sorted List: \n";
  	for(i=0; i<n; i++)
  		cout<<a[i]<<" ";
  }
  
};

int main()
{
  Quick_sorting Q;
  
  Q.Read_and_Call();
  
  return 0;
}
