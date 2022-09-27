// Maps Basic Example in C++

#include <bits/stdc++.h>
using namespace std;

int main()
{
  map <string,int> marksmap; //Declaration
  /* map <Datatype 1, Datatype 2> Identifier; 
     OR
	 map <Key value, Map value> Identifier; */
  
  //Taking Input:
  
  int n;
  cout<<"Enter the Number of Elements:"<<endl;
  cin>>n;
  
  cout<<"Enter Name and Marks Respectively:"<<endl;
  string name;
  int    marks;
  
  int i;
  for(i=0; i<n; i++)
  {
  	cin>>name;
  	cin>>marks;
  	
  	marksmap.insert({name,marks}); // O(log n)
  }
  
  //Display:
  cout<<endl;
  
  //Creating Iterator for output:
  
  map <string,int>::iterator it;
  /* map <Datatype 1, Datatype 2>::iterator identifier; */
  
  cout<<"List of Names and Marks:"<<endl;
  for(it=marksmap.begin(); it!=marksmap.end(); it++)
  {
  	cout<<(*it).first<<" "<<(*it).second<<endl;
  	
  	/* for displaying:
	  cout<<(*Iterator_name).first<<" "<<(*Iterator_name).second<<endl; */
  }
  
  return 0;
}
