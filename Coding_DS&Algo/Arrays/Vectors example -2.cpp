// Vectors Example -2 :
/* This Code doesnt run in C++98 */

#include <bits/stdc++.h>
using namespace std;

bool f(int x, int y) // comparator
{
  return x > y ;
}

int main()
{
  vector <int> v = {14,11,2,3,100,123,100,100,100,100};
  
  sort(v.begin(),v.end()); // O(NlogN)
  
  cout<<"Ascending Sorting: "<<endl;
  for(int i:v)
  {
    cout<<i<<" ";
  }
  cout<<endl;
  cout<<endl;
  
  //Implementing Binary Search using C++ STL: O(logN)
  
  bool present = binary_search(v.begin(),v.end(),3); //true(1)
  cout<<"Searching whether 3 is there or not in the list: "<<present<<endl;
  
  present = binary_search(v.begin(),v.end(),1); //false(0)
  cout<<"Searching whether 1 is there or not in the list: "<<present<<endl;
  
  cout<<endl;
  
  auto it = lower_bound(v.begin(),v.end(),100);  // >=
  auto it2 = upper_bound(v.begin(),v.end(),100); // >
  
  cout<<"Lower bound  ,  Upper bound :"<<endl;
  cout<<*it<<" , "<<*it2<<endl;
  
  cout<<"Number of times 100 appreared: "<<endl;
  cout<<it2 - it<<endl;
  
  cout<<endl;
  
  //Reverse Sorting
  
  sort(v.begin(),v.end(),f); // sort(v.begin(),v.end(),comparator)
  
  cout<<"Reverse Sorting: "<<endl;
  for(int i:v)
    cout<<i<<" ";
  cout<<endl;
  cout<<endl;
  
  //Iteration with the help of Call by Reference
  for(int &i:v)
    i++;
    
  cout<<"Iterated(by 1) Display: "<<endl;
  for(int i:v)
    cout<<i<<" ";
  cout<<endl;
  cout<<endl;
  
  return 0;
}  
