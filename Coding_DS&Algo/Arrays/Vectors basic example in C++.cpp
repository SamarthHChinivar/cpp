//Program for showing how to use Vectors(Dyanmic Arrays) in C++ and it's basic operations

/* Vector is a stack , as it has  push_back(datatype)   and   pop_back()  operations */

#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector <int> v; // vector <datatype> identifier;   this is for without mentioning size
  
  /* for mentioning size:  vector <datatype> identifier (number of elements, intial value 
  of all elements); */ 
  /*eg: vector <int> A(100,1); There are 100 elements, with each element's initial value 
    being 1 */
 
  // Inserting Elements in Vector	
 
  v.push_back(10); // v.push_back(number);
  v.push_back(2);
  v.push_back(3);
  v.push_back(40);
  v.push_back(5);
  v.push_back(6);
  
  //Displaying Elements
  
  for(int i=0; i<v.size(); i++)
  {
  	cout<<v[i]<<"\t";
  }
  
  cout<<endl;

  //Sorting
  
  sort(v.begin(),v.end());
  
  //final display
  
  cout<<"Sorted List: "<<endl;
  for(int i=0; i<v.size(); i++)
  {
  	cout<<v[i]<<"\t";
  }
  cout<<endl;
    
  // Deleting Elements
  
  v.pop_back(); // v.pop_back();
  v.pop_back();
 
  return 0;
}
