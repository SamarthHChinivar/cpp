/* Move all Negative Elements to the End of the Array in the Same Order */

#include <bits/stdc++.h>
using namespace std;

void segregate(int a[], int n)
{
  int pos[n],neg[n];
  
  int i;
  
  int p = 0;
  for(i=0; i<n; i++)
  {
  	if(a[i] >= 0)
  	{
  	  pos[p++] = a[i];	
	}
  }
  
  int q = p;
  for(i=0; i<n; i++)
  {
  	if(a[i] < 0)
  	{
  	  neg[q++] = a[i];	
	}
	
  }
  
  // Shifting All Elements to a[i]
  
  for(i=0; i<p; i++)
  	a[i] = pos[i];
  	
  for(i=p; i<q; i++)
  	a[i] = neg[i];
  	
}

void display(int a[], int n)
{
  int i;
  
  cout<<"Segregated List:"<<endl;
  for(i=0; i<n; i++)
  {
  	cout<<a[i]<<" ";
  }
 	
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
  	
  segregate(a,n);
  
  cout<<endl;
  display(a,n);
  cout<<endl;
  
  return 0;
}
