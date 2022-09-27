// Finding Range and Coeffiecnt of Array

/* Range = (Max - Min)
   Coefficient = (Max-Min) / (Max+Min) */

#include <bits/stdc++.h>
using namespace std;

float getMin(int a[],int n)
{
  float min = 999;
  
  for(int i=0; i<n; i++)
  {
  	if(a[i] < min)
  		min = a[i];
  }
  
  return min;
}

float getMax(int a[],int n)
{
  float max = 0;
  
  for(int i=0; i<n; i++)
  {
  	if(a[i] > max)
  		max = a[i];
  }
  
  return max;
}

void Range_Coefficient(int a[],int n)
{
   float min = getMin(a,n);
   float max = getMax(a,n);
   
   float Range = max - min;
   cout<<"Range = "<<int(Range)<<endl;
   
   float Coefficient = (max-min) / (max+min);
   cout<<"Coefficient = "<<Coefficient<<endl;
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
  Range_Coefficient(a,n);
  cout<<endl;
  
  return 0;
}
