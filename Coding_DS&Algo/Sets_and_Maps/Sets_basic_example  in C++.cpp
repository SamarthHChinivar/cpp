// Sets in C++ STL

#include <bits/stdc++.h>
using namespace std;

int main()
{
  set <int> s;  // declaration
  /* set <datatype> identifier; */
  
  // Taking Input of the Set:
  
  int n;
  cout<<"Enter the Number of Elements:"<<endl;
  cin>>n; 
  
  cout<<"Enter Elements:"<<endl;
  int value = 0,i; 
  for(i=0; i<n; i++)
  {
  	cin>>value;
  	
  	s.insert(value); // O(log n) 
	// s.insert(new value);
  }
  
  
  // Deleting an Item:
  cout<<endl;
  
  int item;
  cout<<"Enter the Item to be Deleted:"<<endl;
  cin>>item;
  
  bool present = binary_search(s.begin(),s.end(),item); //O(log n)
  
  if(present == 1)
  {
    s.erase(item); // O(log n) 
    // s.erase(new value);
    cout<<"Item Deleted = "<<item<<endl;
  }
  else
  {
  	cout<<"Item not found"<<endl;
  }
  
  //Output of the Set:
  cout<<endl;
  
  cout<<"Set:"<<endl;
  
  for(int x:s)
  {
  	cout<<x<<" ";
  }
  
  cout<<endl;
  
  return 0;
}
