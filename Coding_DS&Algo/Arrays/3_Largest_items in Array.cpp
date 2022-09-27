// 3 Largest Elements in the Array / Vector

/* Given an array with all distinct
   elements, find the largest three elements. Expected time 
   complexity is O(n) and extra space is O(1).  */

# include <bits/stdc++.h>
using namespace std;

bool f(int x, int y)
{
  return x > y;
}
// x > y is used here for sorting the array in reverse
 
void print3largest(int a[],int n)
{
  sort(a,a+n,f);
  
  cout<<"3 Largest Elements in the List are:"<<endl;
  
  cout<<"First =  "<<a[0]<<endl;
  cout<<"Second = "<<a[1]<<endl;
  cout<<"Third =  "<<a[2]<<endl;
  
}

int main()
{
  int n;
  cout<<"Enter the Number of Elements:"<<endl;
  cin>>n;
  
  int a[n],i;
  cout<<"Enter Elements:"<<endl;
  for(i=0; i<n; i++)
  	cin>>a[i];
  	
  cout<<endl;
  print3largest(a,n);
  cout<<endl;
  
  return 0;
}
