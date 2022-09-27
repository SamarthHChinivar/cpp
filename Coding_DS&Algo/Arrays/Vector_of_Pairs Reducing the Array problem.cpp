// Reducing Array Problem with the help of Vector of Pairs

#include <bits/stdc++.h>
using namespace std;

bool c(pair <int,int> p1, pair <int,int> p2) //comparator
{
  return p1.first < p2.first;
  
  /* Here we are sorting only the values(p.first or arr[i]) in ascending order
     and we are not changing index_values here (p.second or i) */
     
}

int main()
{
  int n;
  cout<<"Enter the Number of Elements:"<<endl;
  cin>>n;
  
  int arr[n],i;
  cout<<"Enter the Elements:"<<endl;
  for(i=0; i<n; i++)
  	cin>>arr[i];
  	
  vector <pair <int,int>> p;
  // Declaration: vector <pair <datatype 1,datatype 2>> identifier;
  
  for(i=0; i<n; i++)
  {
  	p.push_back(make_pair(arr[i], i));
  	
  	/* make_pair(first,second) is used for creating a pair in order. We use make_pair(first,second)
	   when we need to pass a pair as a parameter */
  }
  
  
  sort(p.begin(),p.end(),c);
  // we used comparator c here , just to sort only the values(p.first or arr[i])
  
  // After sorting , now we are reducing the array
  for(i=0; i<p.size(); i++)
  {
  	arr[p[i].second] = i;
  	
  	// p[i].second is old index value and i is new index value
  	
  	/* Reducing Array Logic */
  }
  
  cout<<endl;
  cout<<"Reduced Array:"<<endl;
  for(i=0; i<p.size(); i++)
  {
  	cout<<arr[i]<<" ";
  }
  cout<<endl;
  
  return 0;
}
