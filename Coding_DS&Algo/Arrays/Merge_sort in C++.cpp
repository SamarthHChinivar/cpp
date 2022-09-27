// Merge Sort in C++

#include <iostream>
using namespace std;

class Merge_sorting
{  
  public:
  	
  void Read_and_Call()
  {
  	// Taking User Input:
  	
	int n;
    cout<<"Enter the Number of Elements: \n";
    cin>>n;
    
    int a[n],i;
    cout<<"Enter the Elements of the Array: \n";
    for(i=0; i<n; i++)
    	cin>>a[i];
    
    // Function Calls:
    
    Merge_sort(a,0,n-1);
     
    cout<<endl;
	Display_array(a,n);
	cout<<endl;
  }
  
  void Merge_sort(int a[], int low, int high)
  {
  	if(low < high) // value of Low should always be less than High
  	{
  	  int mid = (low + high) / 2; 
  	  
  	  Merge_sort(a,low,mid);    // Left  Array
  	  Merge_sort(a,mid+1,high); // Right Array
  	  
  	  Merge(a,low,mid,high); // Combines Left and Right Arrays
	}
  }
  
  void Merge(int a[], int low, int mid, int high)
  {
  	int i = low;
  	int j = mid+1;
  	
  	int k = low;
  	int c[high+1];
  	
  	while(i <= mid  && j <= high)
  	{
  	  if(a[i] <= a[j])
  	  {
  	  	c[k] = a[i];
  	  	
  	  	i++ ;
  	  	k++ ;
	  }
	  
	  else
	  {
	    c[k] = a[j];
	    
	    j++ ;
	    k++ ;
	  }
	  
    }
    
	/* If One Array exhausts, then we will use the following while loops: */
	  
	while(i <= mid)
	{
	  c[k] = a[i];
	    
	   i++ ;
	   k++ ;
	}
	  
	while(j <= high)
	{
	  c[k] = a[j];
	  	
	   j++ ;
	   k++ ;
	}
	  
	/* Combing and Shifting the Resultant Sorted Array */
	  
	for(i=low; i<=high; i++)
		a[i] = c[i];
	  
	
  }
  
  void Display_array(int a[], int n)
  {
  	int i;
  	
  	cout<<"Sorted Array: \n";
	for(i=0; i<n; i++)
  		cout<<a[i]<<" ";
  }

};


int main()
{
  Merge_sorting M;
  
  M.Read_and_Call();
    	
  return 0;
}
