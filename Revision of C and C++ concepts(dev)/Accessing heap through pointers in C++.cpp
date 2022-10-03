//using pointers to access heap in C++

#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
 int n,i;
 
 cout<<"Enter no. of Elements :-\n";
 cin>>n;
 
 int *p=new int[n];
 
 cout<<"Enter the Elements of Array :-\n";
 for(i=0;i<n;i++)
 	cin>>p[i];
 	
 cout<<"Array Elements are :-\n";
 for(i=0;i<n;i++)
 	cout<<p[i]<<" ";

 return 0;
}
